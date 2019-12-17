#pragma once
#include "pch.h"
#include <boost/asio.hpp>
#include "Common.h"
#include "Reply.h"

namespace yawn
{
    class ConnectionManager;
    class RequestHandler;
    class RequestParser;

    class Connection
    {
    public:
        Connection(const Connection&) = delete;
        Connection& operator=(const Connection&) = delete;
        
        explicit Connection(boost::asio::ip::tcp::socket socket,
            ConnectionManager& manager, RequestHandler& handler);
        /// Start the first asynchronous operation for the connection.
        void start();

        /// Stop all asynchronous operations associated with the connection.
        void stop();
    private:
        /// Perform an asynchronous read operation.
        void do_read();

        /// Perform an asynchronous write operation.
        void do_write();

        /// Socket for the connection.
        boost::asio::ip::tcp::socket socket_;

        /// The manager for this connection.
        ConnectionManager& connection_manager_;

        /// The handler used to process the incoming request.
        RequestHandler& request_handler_;

        /// Buffer for incoming data.
        std::array<char, 8192> buffer_;

        /// The incoming request.
        request request_;

        /// The parser for the incoming request.
        RequestParser& request_parser_;

        /// The reply to be sent back to the client.
        reply reply_;
    };
    typedef std::shared_ptr<Connection> ConnectionPtr;

}


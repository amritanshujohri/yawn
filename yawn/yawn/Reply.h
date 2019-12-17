#pragma once
#include <boost/asio.hpp>
#include "Common.h"
#include "Reply.h"

namespace yawn
{
    struct reply
    {

        std::vector<header> headers;

        // The content to be sent in the reply.
        std::string content;

        // Convert the reply into a vector of buffers. The buffers do not own the
        // underlying memory blocks, therefore the reply object must remain valid and
        // not be changed until the write operation has completed.
        std::vector<boost::asio::const_buffer> to_buffers();

        // Get a stock reply.
        static reply stock_reply(status_type status);

        // status
        status_type status;
    };

}


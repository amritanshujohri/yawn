#pragma once
#include "pch.h"
#include "Reply.h"

namespace yawn
{
    class Request;
    class RequestHandler
    {
    public:
        explicit RequestHandler(RequestHandler&) = delete;
        explicit RequestHandler(std::string doc_path);
        ~RequestHandler();


        /// Handle a request and produce a reply.
        void handle_request(const Request& req, reply& rep);

    private:
        /// The directory containing the files to be served.
        std::string doc_root_;

        /// Perform URL-decoding on a string. Returns false if the encoding was
        /// invalid.
        static bool url_decode(const std::string& in, std::string& out);
    };
}


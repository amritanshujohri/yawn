#pragma once
#include "pch.h"
#include "Common.h"
#include "Reply.h"

namespace yawn
{

    class RequestHandler
    {
    public:
        explicit RequestHandler(RequestHandler&) = delete;
        RequestHandler(std::string doc_path): doc_root_(doc_path)
        {

        }


        /// Handle a request and produce a reply.
        void handle_request(const request& req, reply& rep);

    private:
        /// The directory containing the files to be served.
        const std::string doc_root_;

        /// Perform URL-decoding on a string. Returns false if the encoding was
        /// invalid.
        static bool url_decode(const std::string& in, std::string& out);
    };
}


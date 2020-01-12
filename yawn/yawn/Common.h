#pragma once
#include "pch.h"

namespace yawn
{
    struct header
    {
        std::string name;
        std::string value;
    };

    struct request
    {
        std::string method;
        std::string uri;
        unsigned int http_version_major;
        unsigned int http_version_minor;
        std::vector<header> headers;
    };

    /// The status of the reply.
    enum status_type
    {
        ok = 200,
        created = 201,
        accepted = 202,
        no_content = 204,
        multiple_choices = 300,
        moved_permanently = 301,
        moved_temporarily = 302,
        not_modified = 304,
        bad_request = 400,
        unauthorized = 401,
        forbidden = 403,
        not_found = 404,
        internal_server_error = 500,
        not_implemented = 501,
        bad_gateway = 502,
        service_unavailable = 503
    };

    std::string extension_to_type(const std::string& extension);


}


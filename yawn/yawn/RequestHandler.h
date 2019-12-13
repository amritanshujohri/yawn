#pragma once
#include "pch.h"
namespace yawn
{
    class RequestHandler
    {
    public:
        explicit RequestHandler(RequestHandler&) = delete;
        RequestHandler(std::string doc_path);
        ~RequestHandler();
    };
}


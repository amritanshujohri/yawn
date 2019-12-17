#include "pch.h"
#include "Common.h"
#include <unordered_map>

std::string yawn::extension_to_type(const std::string & extension)
{
    static std::unordered_map<std::string, std::string> mime
    {
      { "gif", "image/gif" },
      { "htm", "text/html" },
      { "html", "text/html" },
      { "jpg", "image/jpeg" },
      { "png", "image/png" }
    };
    return mime[extension];
}

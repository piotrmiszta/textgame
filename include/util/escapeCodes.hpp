#ifndef UTIL_ESCAPE_CODES_HPP_
#define UTIL_ESCAPE_CODES_HPP_
#include <string>
namespace Util{
    class EscapeCodes{
    public:
        static constexpr std::string_view prefix { "\x1b[" };
        static inline std::string move_cursor(const int x, const int y);

    };

    inline std::string EscapeCodes::move_cursor(const int x, const int y) {
        std::string ret(prefix);
        ret += std::to_string(x);
        ret += ";";
        ret += std::to_string(y);
        ret += "H";
        return ret;
    }

}; //namespace Util

#endif // UTIL_ESCAPE_CODES_HPP_

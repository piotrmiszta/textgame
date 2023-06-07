#ifndef UTIL_COLOR_HPP_
#define UTIL_COLOR_HPP_
#include <string>
namespace Util{
    class Color{
    public:
        static constexpr std::string_view red { "255;0;0m" };
        static constexpr std::string_view green { "0;255;0m" };
        static constexpr std::string_view reset { "\x1b[0m" };

        static constexpr std::string_view background { "\x1b[48;2;" };
        static constexpr std::string_view foreground { "\x1b[38;2;" };
    };
}; // namespace Util


#endif // UTIL_COLOR_HPP_
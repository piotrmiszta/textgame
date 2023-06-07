#ifndef UTIL_TERMINAL_HPP_
#define UTIL_TERMINAL_HPP_
#include <string>
#include "color.hpp"
namespace Util{

    class Terminal{
    private:
        int row;
        int column;
        void get_size();
        /* colors in terminal */
    public:
        Terminal();
        void test();

    }; // class Game

}; // namespace Util

#endif //UTIL_TERMINAL_HPP_

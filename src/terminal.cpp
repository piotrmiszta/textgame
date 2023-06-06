#include "terminal.hpp"
#include <iostream>
#ifdef _WIN32
      #include "windows.h"
#else
    #include "sys/ioctl.h"
#endif
Game::Terminal::Terminal() {
    column = 0;
    row = 0;
    get_size();
}

void Game::Terminal::get_size() {
    #ifdef _WIN32

    #else
        /* LINUX SIZE TERMINAL */
        struct winsize max;
        ioctl(0, TIOCGWINSZ, &max);
        column = max.ws_col;
        row = max.ws_row;
    #endif

}

void Game::Terminal::print() {
    std::cout << "row: "<< row << " column: "<< column <<std::endl;

}
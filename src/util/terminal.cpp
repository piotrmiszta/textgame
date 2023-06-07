#include "terminal.hpp"
#include <iostream>
#include "logger.hpp"
#include "escapeCodes.hpp"
#ifdef _WIN32
      #include "windows.h"
#else
    #include "sys/ioctl.h"
#endif
Util::Terminal::Terminal() {
    column = 0;
    row = 0;
    get_size();
}

void Util::Terminal::get_size() {
    int curr_column;
    int curr_row;
    #ifdef _WIN32

    #else
        /* LINUX SIZE TERMINAL */
        struct winsize max;
        ioctl(0, TIOCGWINSZ, &max);
        column = max.ws_col;
        row = max.ws_row;
    #endif
    if(curr_column != column || curr_row != row) {
        LogDebug << "Changed size of terminal to " << row << " x " << column << std::endl;
    }
}

void Util::Terminal::test() {
    for(int i = 0; i < row; i++) {
        std::cout << "/\n";
    }

}


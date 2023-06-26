#ifndef _LOGGER_HPP_
#define _LOGGER_HPP_
#include <iostream>
#include <string>
#include "color.hpp"
class log {
private:
    std::ostream& os;
    bool first;
    std::string type;
public:
    log(std::string type) : os(std::cout), first(true), type(type) {}

    template <typename T>
    log& operator << (const T& string) {
        if(first) {
            os << type;
            first = false;
        }
        os << string;
        return *this;
    }

};

#define logDebug()          log("\x1b[32m""[ Debug ] ""\x1b[0m")
#define logInfo()           log("\x1b[33m""[ Info  ] ""\x1b[0m")
#define logWarning()        log("\x1b[34m""[Warning] ""\x1b[0m")
#define logError()          log("\x1b[35m""[ Error ] ""\x1b[0m")
#define logFatal()          log("\x1b[36m""[ Fatal ] ""\x1b[0m")


#endif //_LOGGER_HPP_

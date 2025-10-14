#pragma once
#include <string>
#include <fstream>
#include <iostream>

namespace Utils {
    class Logger {
    public:
        static void log(const std::string& msg);
    };
}

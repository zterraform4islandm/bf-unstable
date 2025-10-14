#include "Logger.h"
#include <ctime>

namespace Utils {
    void Logger::log(const std::string& msg) {
        std::ofstream logFile("fecurity.log", std::ios::app);
        std::time_t t = std::time(nullptr);
        logFile << "[" << std::asctime(std::localtime(&t)) << "] " << msg << std::endl;
        std::cout << msg << std::endl;
    }
}

#include "Engine.h"
#include "../utils/Logger.h"
#include <thread>
#include <chrono>

using Utils::Logger;

namespace Core {
    void Engine::start() {
        Logger::log("Fecurity Engine started successfully.");
    }

    void Engine::update() {
        for (int i = 0; i < 5; ++i) {
            Logger::log("Running system analysis cycle " + std::to_string(i + 1));
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
        }
    }

    void Engine::stop() {
        Logger::log("Fecurity Engine shutting down...");
    }
}

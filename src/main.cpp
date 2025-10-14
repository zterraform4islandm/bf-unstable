#include "Fecurity.h"
#include "core/Engine.h"
#include "core/Overlay.h"
#include "utils/Logger.h"

int main() {
    Utils::Logger::log("=== Demo Application ===");
    Core::Engine::start();
    Core::Overlay::render();
    Core::Engine::update();
    Core::Engine::stop();
    Utils::Logger::log("Application finished.");
    return 0;
}

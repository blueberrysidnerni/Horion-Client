#include "module_manager.h"
#include "modules/fly.h"
#include "modules/xray.h"
#include <iostream>

void ModuleManager::InitModules() {
    Fly::Enable();
    Xray::Enable();
    std::cout << "Modules initialized (Fly, Xray)." << std::endl;
}

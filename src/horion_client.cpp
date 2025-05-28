#include "horion_client.h"
#include "module_manager.h"
#include <iostream>

void HorionClient::Launch() {
    std::cout << "[Horion] Initializing client..." << std::endl;
    ModuleManager::InitModules();
}

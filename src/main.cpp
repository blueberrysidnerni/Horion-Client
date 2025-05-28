#include "horion_client.h"
#include <iostream>

int main() {
    HorionClient client;
    client.Launch();
    std::cout << "Horion Client started." << std::endl;
    return 0;
}

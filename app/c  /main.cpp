```cpp
#include <iostream>
#include "nvidia_upgrade.cpp"
#include "tensor_upgrade.cpp"
#include "hitbox_improvement.cpp"

int recoil;
int target;

void upgrade_nvidia();
void tensor_upgrade();
void improve_hitbox();

int main() {
    std::cout << "Upgrading NVIDIA scripts...\n";
    upgrade_nvidia();
    std::cout << "nvidia_upgrade_success\n";

    std::cout << "Creating Tensor script...\n";
    tensor_upgrade();
    std::cout << "tensor_upgrade_success\n";

    std::cout << "Improving hitbox functionality...\n";
    improve_hitbox();
    std::cout << "hitbox_improvement_success\n";

    return 0;
}

void upgrade_nvidia() {
    // Call the function from nvidia_upgrade.cpp
    nvidia_upgrade();
}

void tensor_upgrade() {
    // Call the function from tensor_upgrade.cpp
    tensor_upgrade();
}

void improve_hitbox() {
    // Call the function from hitbox_improvement.cpp
    improve_hitbox();
}
```
```cpp
#include <torch/torch.h>
#include <iostream>

// Function to upgrade tensor
void tensor_upgrade() {
    // Define a new tensor
    torch::Tensor tensor = torch::rand({2, 3});

    std::cout << "Tensor before upgrade: " << tensor << std::endl;

    // Upgrade the tensor
    tensor = tensor + 2;

    std::cout << "Tensor after upgrade: " << tensor << std::endl;

    std::cout << "tensor_upgrade_success" << std::endl;
}

int main() {
    tensor_upgrade();
    return 0;
}
```
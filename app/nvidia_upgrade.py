```python
import torch
import tensorrt as trt

# Variable for recoil adjustment
recoil = None

# Variable for target lock
target = None

def upgrade_nvidia():
    # Load the NVIDIA script
    nvidia_script = torch.load("nvidia_script.pth")

    # Upgrade the script
    upgraded_script = nvidia_script.upgrade()

    # Save the upgraded script
    torch.save(upgraded_script, "upgraded_nvidia_script.pth")

    # Display success message
    print("nvidia_upgrade_success")

if __name__ == "__main__":
    upgrade_nvidia()
```
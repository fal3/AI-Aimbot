```python
import torch
import tensorrt as trt

def tensor_upgrade():
    # Initialize TensorRT engine and runtime
    TRT_LOGGER = trt.Logger(trt.Logger.WARNING)
    trt_runtime = trt.Runtime(TRT_LOGGER)

    # Load PyTorch model
    model = torch.hub.load('nvidia/DeepLearningExamples:torchhub', 'nvidia_ssd')
    model.to('cuda')
    model.eval()

    # Convert PyTorch model to TensorRT
    model_trt = torch2trt(model, [torch.zeros((1, 3, 300, 300)).cuda()])

    # Save TensorRT model
    with open('tensor_upgrade.trt', 'wb') as f:
        f.write(model_trt.engine.serialize())

    print("tensor_upgrade_success")

if __name__ == "__main__":
    tensor_upgrade()
```
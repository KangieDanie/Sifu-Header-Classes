#pragma once
#include "CoreMinimal.h"
#include "ERBFKernelType.generated.h"

UENUM()
enum class ERBFKernelType : uint8 {
    Gaussian,
    Exponential,
    Linear,
    Cubic,
    Quintic,
};


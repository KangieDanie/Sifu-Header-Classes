#pragma once
#include "CoreMinimal.h"
#include "ERigUnitDebugTransformMode.generated.h"

UENUM()
enum class ERigUnitDebugTransformMode : uint8 {
    Point,
    Axes,
    Box,
    Max,
};


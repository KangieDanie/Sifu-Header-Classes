#pragma once
#include "CoreMinimal.h"
#include "ERigUnitDebugPointMode.generated.h"

UENUM()
enum class ERigUnitDebugPointMode : uint8 {
    Point,
    Vector,
    Max,
};


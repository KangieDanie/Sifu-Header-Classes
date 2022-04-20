#pragma once
#include "CoreMinimal.h"
#include "ERBFQuatDistanceType.generated.h"

UENUM()
enum class ERBFQuatDistanceType : uint8 {
    Euclidean,
    ArcLength,
    SwingAngle,
    TwistAngle,
};


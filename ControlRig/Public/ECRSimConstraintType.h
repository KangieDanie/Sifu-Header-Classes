#pragma once
#include "CoreMinimal.h"
#include "ECRSimConstraintType.generated.h"

UENUM()
enum class ECRSimConstraintType : uint8 {
    Distance,
    DistanceFromA,
    DistanceFromB,
    Plane,
};


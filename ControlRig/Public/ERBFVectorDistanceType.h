#pragma once
#include "CoreMinimal.h"
#include "ERBFVectorDistanceType.generated.h"

UENUM()
enum class ERBFVectorDistanceType : uint8 {
    Euclidean,
    Manhattan,
    ArcLength,
};


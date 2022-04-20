#pragma once
#include "CoreMinimal.h"
#include "EApplyTransformMode.generated.h"

UENUM()
enum class EApplyTransformMode : uint8 {
    Override,
    Additive,
    Max,
};


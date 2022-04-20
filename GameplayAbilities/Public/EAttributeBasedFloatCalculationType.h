#pragma once
#include "CoreMinimal.h"
#include "EAttributeBasedFloatCalculationType.generated.h"

UENUM()
enum class EAttributeBasedFloatCalculationType : uint8 {
    AttributeMagnitude,
    AttributeBaseValue,
    AttributeBonusMagnitude,
    AttributeMagnitudeEvaluatedUpToChannel,
};


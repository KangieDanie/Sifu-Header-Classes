#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectMagnitudeCalculation.generated.h"

UENUM()
enum class EGameplayEffectMagnitudeCalculation : uint8 {
    ScalableFloat,
    AttributeBased,
    CustomCalculationClass,
    SetByCaller,
};


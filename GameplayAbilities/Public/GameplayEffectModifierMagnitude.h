#pragma once
#include "CoreMinimal.h"
#include "AttributeBasedFloat.h"
#include "EGameplayEffectMagnitudeCalculation.h"
#include "ScalableFloat.h"
#include "CustomCalculationBasedFloat.h"
#include "SetByCallerFloat.h"
#include "GameplayEffectModifierMagnitude.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectModifierMagnitude {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EGameplayEffectMagnitudeCalculation MagnitudeCalculationType;
    
    UPROPERTY(EditDefaultsOnly)
    FScalableFloat ScalableFloatMagnitude;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeBasedFloat AttributeBasedMagnitude;
    
    UPROPERTY(EditDefaultsOnly)
    FCustomCalculationBasedFloat CustomMagnitude;
    
    UPROPERTY(EditDefaultsOnly)
    FSetByCallerFloat SetByCallerMagnitude;
    
public:
    FGameplayEffectModifierMagnitude();
};


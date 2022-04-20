#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "GameplayEffectModifiedAttribute.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectModifiedAttribute {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayAttribute Attribute;
    
    UPROPERTY()
    float TotalMagnitude;
    
    FGameplayEffectModifiedAttribute();
};


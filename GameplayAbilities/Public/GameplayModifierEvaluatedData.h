#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "EGameplayModOp.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayModifierEvaluatedData.generated.h"

USTRUCT(BlueprintType)
struct FGameplayModifierEvaluatedData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayAttribute Attribute;
    
    UPROPERTY()
    TEnumAsByte<EGameplayModOp::Type> ModifierOp;
    
    UPROPERTY()
    float Magnitude;
    
    UPROPERTY()
    FActiveGameplayEffectHandle Handle;
    
    UPROPERTY()
    bool IsValid;
    
    GAMEPLAYABILITIES_API FGameplayModifierEvaluatedData();
};


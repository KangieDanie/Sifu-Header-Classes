#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayAbilitySpecHandleAndPredictionKey.generated.h"

USTRUCT()
struct GAMEPLAYABILITIES_API FGameplayAbilitySpecHandleAndPredictionKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayAbilitySpecHandle AbilityHandle;
    
    UPROPERTY()
    int32 PredictionKeyAtCreation;
    
    FGameplayAbilitySpecHandleAndPredictionKey();
};


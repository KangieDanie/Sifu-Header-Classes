#pragma once
#include "CoreMinimal.h"
#include "GameplayModifierEvaluatedData.h"
#include "GameplayEffectCustomExecutionOutput.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectCustomExecutionOutput {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGameplayModifierEvaluatedData> OutputModifiers;
    
    UPROPERTY()
    uint8 bTriggerConditionalGameplayEffects: 1;
    
    UPROPERTY()
    uint8 bHandledStackCountManually: 1;
    
    UPROPERTY()
    uint8 bHandledGameplayCuesManually: 1;
    
public:
    FGameplayEffectCustomExecutionOutput();
};


#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectCalculation.h"
#include "GameplayEffectCustomExecutionParameters.h"
#include "GameplayEffectCustomExecutionOutput.h"
#include "GameplayEffectExecutionCalculation.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPLAYABILITIES_API UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRequiresPassedInTags;
    
public:
    UGameplayEffectExecutionCalculation();
    UFUNCTION(BlueprintNativeEvent)
    void Execute(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const;
    
};


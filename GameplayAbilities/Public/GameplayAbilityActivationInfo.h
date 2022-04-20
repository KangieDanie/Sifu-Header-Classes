#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityActivationMode.h"
#include "PredictionKey.h"
#include "GameplayAbilityActivationInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilityActivationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EGameplayAbilityActivationMode::Type> ActivationMode;
    
    UPROPERTY()
    uint8 bCanBeEndedByOtherInstance: 1;
    
private:
    UPROPERTY()
    FPredictionKey PredictionKeyWhenActivated;
    
public:
    FGameplayAbilityActivationInfo();
};


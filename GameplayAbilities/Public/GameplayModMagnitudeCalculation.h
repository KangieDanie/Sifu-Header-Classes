#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectCalculation.h"
#include "GameplayEffectSpec.h"
#include "GameplayModMagnitudeCalculation.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPLAYABILITIES_API UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool bAllowNonNetAuthorityDependencyRegistration;
    
public:
    UGameplayModMagnitudeCalculation();
    UFUNCTION(BlueprintNativeEvent)
    float CalculateBaseMagnitude(const FGameplayEffectSpec& Spec) const;
    
};


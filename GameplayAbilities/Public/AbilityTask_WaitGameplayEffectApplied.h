#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "GameplayEffectSpec.h"
#include "ActiveGameplayEffectHandle.h"
#include "AbilityTask_WaitGameplayEffectApplied.generated.h"

class UAbilitySystemComponent;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UAbilitySystemComponent* ExternalOwner;
    
public:
    UAbilityTask_WaitGameplayEffectApplied();
    UFUNCTION()
    void OnApplyGameplayEffectCallback(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle);
    
};


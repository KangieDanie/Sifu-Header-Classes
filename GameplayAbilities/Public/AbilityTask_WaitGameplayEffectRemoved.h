#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "WaitGameplayEffectRemovedDelegateDelegate.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectRemovalInfo.h"
#include "AbilityTask_WaitGameplayEffectRemoved.generated.h"

class UAbilityTask_WaitGameplayEffectRemoved;
class UGameplayAbility;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitGameplayEffectRemovedDelegate OnRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FWaitGameplayEffectRemovedDelegate InvalidHandle;
    
    UAbilityTask_WaitGameplayEffectRemoved();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle);
    
    UFUNCTION()
    void OnGameplayEffectRemoved(const FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
    
};


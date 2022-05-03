#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "WaitDelayDelegateDelegate.h"
#include "AbilityTask_WaitDelay.generated.h"

class UAbilityTask_WaitDelay;
class UGameplayAbility;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitDelay : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitDelayDelegate OnFinish;
    
    UAbilityTask_WaitDelay();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitDelay* WaitDelay(UGameplayAbility* OwningAbility, float Time);
    
};


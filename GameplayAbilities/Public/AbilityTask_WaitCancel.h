#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "WaitCancelDelegateDelegate.h"
#include "AbilityTask_WaitCancel.generated.h"

class UGameplayAbility;
class UAbilityTask_WaitCancel;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitCancel : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitCancelDelegate OnCancel;
    
    UAbilityTask_WaitCancel();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitCancel* WaitCancel(UGameplayAbility* OwningAbility);
    
    UFUNCTION()
    void OnLocalCancelCallback();
    
    UFUNCTION()
    void OnCancelCallback();
    
};


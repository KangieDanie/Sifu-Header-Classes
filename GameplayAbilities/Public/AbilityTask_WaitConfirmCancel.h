#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "WaitConfirmCancelDelegateDelegate.h"
#include "AbilityTask_WaitConfirmCancel.generated.h"

class UAbilityTask_WaitConfirmCancel;
class UGameplayAbility;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitConfirmCancel : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitConfirmCancelDelegate OnConfirm;
    
    UPROPERTY(BlueprintAssignable)
    FWaitConfirmCancelDelegate OnCancel;
    
    UAbilityTask_WaitConfirmCancel();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(UGameplayAbility* OwningAbility);
    
    UFUNCTION()
    void OnLocalConfirmCallback();
    
    UFUNCTION()
    void OnLocalCancelCallback();
    
    UFUNCTION()
    void OnConfirmCallback();
    
    UFUNCTION()
    void OnCancelCallback();
    
};


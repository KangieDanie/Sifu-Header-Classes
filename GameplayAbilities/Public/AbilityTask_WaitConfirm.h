#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTask -FallbackName=GameplayTask
#include "AbilityTask_WaitConfirm.generated.h"

class UAbilityTask_WaitConfirm;
class UGameplayAbility;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitConfirm : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    UGameplayTask::FGenericGameplayTaskDelegate OnConfirm;
    
    UAbilityTask_WaitConfirm();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitConfirm* WaitConfirm(UGameplayAbility* OwningAbility);
    
    UFUNCTION()
    void OnConfirmCallback(UGameplayAbility* InAbility);
    
};


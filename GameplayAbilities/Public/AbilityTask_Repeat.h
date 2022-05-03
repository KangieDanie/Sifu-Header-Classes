#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "RepeatedActionDelegateDelegate.h"
#include "AbilityTask_Repeat.generated.h"

class UAbilityTask_Repeat;
class UGameplayAbility;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_Repeat : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRepeatedActionDelegate OnPerformAction;
    
    UPROPERTY(BlueprintAssignable)
    FRepeatedActionDelegate OnFinished;
    
    UAbilityTask_Repeat();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Repeat* RepeatAction(UGameplayAbility* OwningAbility, float TimeBetweenActions, int32 TotalActionCount);
    
};


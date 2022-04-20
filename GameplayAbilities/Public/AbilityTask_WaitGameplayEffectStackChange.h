#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "WaitGameplayEffectStackChangeDelegateDelegate.h"
#include "ActiveGameplayEffectHandle.h"
#include "AbilityTask_WaitGameplayEffectStackChange.generated.h"

class UAbilityTask_WaitGameplayEffectStackChange;
class UGameplayAbility;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitGameplayEffectStackChangeDelegate OnChange;
    
    UPROPERTY(BlueprintAssignable)
    FWaitGameplayEffectStackChangeDelegate InvalidHandle;
    
    UAbilityTask_WaitGameplayEffectStackChange();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle);
    
    UFUNCTION()
    void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32 NewCount, int32 OldCount);
    
};


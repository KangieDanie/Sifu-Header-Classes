#pragma once
#include "CoreMinimal.h"
#include "WaitUnscaledDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "AbilityTask_WaitUnscaled.generated.h"

class UAbilityTask_WaitUnscaled;
class UGameplayAbility;

UCLASS()
class SIFU_API UAbilityTask_WaitUnscaled : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitUnscaled m_OnFinish;
    
    UAbilityTask_WaitUnscaled();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitUnscaled* BPF_WaitUnscaled(UGameplayAbility* _owningAbility, float _fDuration);
    
};


#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "InputContext.h"
#include "DetectInputActionDelegateDelegate.h"
#include "AbilityTask_DetectInputAction.generated.h"

class UAbilityTask_DetectInputAction;
class UGameplayAbility;

UCLASS()
class SIFU_API UAbilityTask_DetectInputAction : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDetectInputActionDelegate m_OnInputActionDetected;
    
    UAbilityTask_DetectInputAction();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_DetectInputAction* BPF_DetectInputAction(UGameplayAbility* _owningAbility, InputAction _eAction, bool _bDetectDeactivation, bool _bEndTaskOnDetected, InputContext _eInputContext);
    
};


#pragma once
#include "CoreMinimal.h"
#include "SlowMotionTaskDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "AbilityTask_SlowMotionTask.generated.h"

class UGameplayAbility;
class UAbilityTask_SlowMotionTask;
class UCurveFloat;

UCLASS()
class SIFU_API UAbilityTask_SlowMotionTask : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCurveFloat* m_Curve;
    
    UPROPERTY(BlueprintAssignable)
    FSlowMotionTaskDelegate m_OnFinish;
    
    UAbilityTask_SlowMotionTask();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_SlowMotionTask* BPF_SlowMotionTask(UGameplayAbility* _owningAbility, UCurveFloat* _curve, float _fScale, float _fBlendDuration, float _fCameraSlowMotionFactor, bool _bBlockOthers, bool _bScaleInputStack);
    
};


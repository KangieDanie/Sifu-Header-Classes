#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_ApplyRootMotion_Base.h"
#include "ApplyRootMotionConstantForceDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERootMotionFinishVelocityMode -FallbackName=ERootMotionFinishVelocityMode
#include "AbilityTask_ApplyRootMotionConstantForce.generated.h"

class UGameplayAbility;
class UCurveFloat;
class UAbilityTask_ApplyRootMotionConstantForce;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FApplyRootMotionConstantForceDelegate OnFinish;
    
protected:
    UPROPERTY(Replicated)
    FVector WorldDirection;
    
    UPROPERTY(Replicated)
    float Strength;
    
    UPROPERTY(Replicated)
    float Duration;
    
    UPROPERTY(Replicated)
    bool bIsAdditive;
    
    UPROPERTY(Replicated)
    UCurveFloat* StrengthOverTime;
    
    UPROPERTY(Replicated)
    bool bEnableGravity;
    
public:
    UAbilityTask_ApplyRootMotionConstantForce();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector NewWorldDirection, float NewStrength, float NewDuration, bool NewBIsAdditive, UCurveFloat* NewStrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBEnableGravity);
    
};


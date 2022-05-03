#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_ApplyRootMotion_Base.h"
#include "ApplyRootMotionMoveToForceDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERootMotionFinishVelocityMode -FallbackName=ERootMotionFinishVelocityMode
#include "AbilityTask_ApplyRootMotionMoveToForce.generated.h"

class UGameplayAbility;
class UAbilityTask_ApplyRootMotionMoveToForce;
class UCurveVector;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FApplyRootMotionMoveToForceDelegate OnTimedOut;
    
    UPROPERTY(BlueprintAssignable)
    FApplyRootMotionMoveToForceDelegate OnTimedOutAndDestinationReached;
    
protected:
    UPROPERTY(Replicated)
    FVector StartLocation;
    
    UPROPERTY(Replicated)
    FVector TargetLocation;
    
    UPROPERTY(Replicated)
    float Duration;
    
    UPROPERTY(Replicated)
    bool bSetNewMovementMode;
    
    UPROPERTY(Replicated)
    TEnumAsByte<EMovementMode> NewMovementMode;
    
    UPROPERTY(Replicated)
    bool bRestrictSpeedToExpected;
    
    UPROPERTY(Replicated)
    UCurveVector* PathOffsetCurve;
    
    UPROPERTY(Replicated)
    FVector PathOffsetAmplitude;
    
public:
    UAbilityTask_ApplyRootMotionMoveToForce();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector NewTargetLocation, float NewDuration, bool NewBSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool NewBRestrictSpeedToExpected, UCurveVector* NewPathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, FVector NewPathOffsetAmplitude);
    
};


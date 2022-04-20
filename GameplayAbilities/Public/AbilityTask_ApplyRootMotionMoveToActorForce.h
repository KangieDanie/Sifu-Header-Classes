#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_ApplyRootMotion_Base.h"
#include "ApplyRootMotionMoveToActorForceDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GameplayAbilityTargetDataHandle.h"
#include "ERootMotionMoveToActorTargetOffsetType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERootMotionFinishVelocityMode -FallbackName=ERootMotionFinishVelocityMode
#include "AbilityTask_ApplyRootMotionMoveToActorForce.generated.h"

class AActor;
class UCurveVector;
class UGameplayAbility;
class UCurveFloat;
class UAbilityTask_ApplyRootMotionMoveToActorForce;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FApplyRootMotionMoveToActorForceDelegate OnFinished;
    
protected:
    UPROPERTY(Replicated)
    FVector StartLocation;
    
    UPROPERTY(ReplicatedUsing=OnRep_TargetLocation)
    FVector TargetLocation;
    
    UPROPERTY(Replicated)
    AActor* TargetActor;
    
    UPROPERTY(Replicated)
    FVector TargetLocationOffset;
    
    UPROPERTY(Replicated)
    ERootMotionMoveToActorTargetOffsetType OffsetAlignment;
    
    UPROPERTY(Replicated)
    float Duration;
    
    UPROPERTY(Replicated)
    bool bDisableDestinationReachedInterrupt;
    
    UPROPERTY(Replicated)
    bool bSetNewMovementMode;
    
    UPROPERTY(Replicated)
    TEnumAsByte<EMovementMode> NewMovementMode;
    
    UPROPERTY(Replicated)
    bool bRestrictSpeedToExpected;
    
    UPROPERTY(Replicated)
    UCurveVector* PathOffsetCurve;
    
    UPROPERTY(Replicated)
    UCurveFloat* TimeMappingCurve;
    
    UPROPERTY(Replicated)
    UCurveFloat* TargetLerpSpeedHorizontalCurve;
    
    UPROPERTY(Replicated)
    UCurveFloat* TargetLerpSpeedVerticalCurve;
    
public:
    UAbilityTask_ApplyRootMotionMoveToActorForce();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnTargetActorSwapped(AActor* OriginalTarget, AActor* NewTarget);
    
protected:
    UFUNCTION()
    void OnRep_TargetLocation();
    
public:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32 TargetDataIndex, int32 TargetActorIndex, FVector NewTargetLocationOffset, ERootMotionMoveToActorTargetOffsetType NewOffsetAlignment, float NewDuration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool NewBSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool NewBRestrictSpeedToExpected, UCurveVector* NewPathOffsetCurve, UCurveFloat* NewTimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBDisableDestinationReachedInterrupt);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* NewTargetActor, FVector NewTargetLocationOffset, ERootMotionMoveToActorTargetOffsetType NewOffsetAlignment, float NewDuration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool NewBSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool NewBRestrictSpeedToExpected, UCurveVector* NewPathOffsetCurve, UCurveFloat* NewTimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBDisableDestinationReachedInterrupt);
    
};


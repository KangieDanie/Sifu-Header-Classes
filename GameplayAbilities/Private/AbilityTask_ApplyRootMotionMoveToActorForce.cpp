#include "AbilityTask_ApplyRootMotionMoveToActorForce.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UGameplayAbility;
class UCurveFloat;
class UCurveVector;
class UAbilityTask_ApplyRootMotionMoveToActorForce;

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnTargetActorSwapped(AActor* OriginalTarget, AActor* NewTarget) {
}

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnRep_TargetLocation() {
}

UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToTargetDataActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32 TargetDataIndex, int32 TargetActorIndex, FVector NewTargetLocationOffset, ERootMotionMoveToActorTargetOffsetType NewOffsetAlignment, float NewDuration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool NewBSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool NewBRestrictSpeedToExpected, UCurveVector* NewPathOffsetCurve, UCurveFloat* NewTimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBDisableDestinationReachedInterrupt) {
    return NULL;
}

UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* NewTargetActor, FVector NewTargetLocationOffset, ERootMotionMoveToActorTargetOffsetType NewOffsetAlignment, float NewDuration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool NewBSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool NewBRestrictSpeedToExpected, UCurveVector* NewPathOffsetCurve, UCurveFloat* NewTimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBDisableDestinationReachedInterrupt) {
    return NULL;
}

void UAbilityTask_ApplyRootMotionMoveToActorForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToActorForce, StartLocation);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLocation);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetActor);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLocationOffset);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToActorForce, OffsetAlignment);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToActorForce, Duration);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToActorForce, bDisableDestinationReachedInterrupt);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToActorForce, bSetNewMovementMode);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToActorForce, NewMovementMode);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToActorForce, bRestrictSpeedToExpected);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToActorForce, PathOffsetCurve);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToActorForce, TimeMappingCurve);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLerpSpeedHorizontalCurve);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLerpSpeedVerticalCurve);
}

UAbilityTask_ApplyRootMotionMoveToActorForce::UAbilityTask_ApplyRootMotionMoveToActorForce() {
    this->TargetActor = NULL;
    this->OffsetAlignment = ERootMotionMoveToActorTargetOffsetType::AlignFromTargetToSource;
    this->Duration = 0.00f;
    this->bDisableDestinationReachedInterrupt = false;
    this->bSetNewMovementMode = false;
    this->NewMovementMode = MOVE_Walking;
    this->bRestrictSpeedToExpected = false;
    this->PathOffsetCurve = NULL;
    this->TimeMappingCurve = NULL;
    this->TargetLerpSpeedHorizontalCurve = NULL;
    this->TargetLerpSpeedVerticalCurve = NULL;
}


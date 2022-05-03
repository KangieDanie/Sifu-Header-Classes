#include "AbilityTask_ApplyRootMotionMoveToForce.h"
#include "Net/UnrealNetwork.h"

class UAbilityTask_ApplyRootMotionMoveToForce;
class UGameplayAbility;
class UCurveVector;

UAbilityTask_ApplyRootMotionMoveToForce* UAbilityTask_ApplyRootMotionMoveToForce::ApplyRootMotionMoveToForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector NewTargetLocation, float NewDuration, bool NewBSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool NewBRestrictSpeedToExpected, UCurveVector* NewPathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, FVector NewPathOffsetAmplitude) {
    return NULL;
}

void UAbilityTask_ApplyRootMotionMoveToForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToForce, StartLocation);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToForce, TargetLocation);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToForce, Duration);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToForce, bSetNewMovementMode);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToForce, NewMovementMode);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToForce, bRestrictSpeedToExpected);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToForce, PathOffsetCurve);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionMoveToForce, PathOffsetAmplitude);
}

UAbilityTask_ApplyRootMotionMoveToForce::UAbilityTask_ApplyRootMotionMoveToForce() {
    this->Duration = 0.00f;
    this->bSetNewMovementMode = false;
    this->NewMovementMode = MOVE_Walking;
    this->bRestrictSpeedToExpected = false;
    this->PathOffsetCurve = NULL;
}


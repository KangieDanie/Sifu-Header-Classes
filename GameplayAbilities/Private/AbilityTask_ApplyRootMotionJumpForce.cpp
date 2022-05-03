#include "AbilityTask_ApplyRootMotionJumpForce.h"
#include "Net/UnrealNetwork.h"

class UCurveFloat;
class UGameplayAbility;
class UCurveVector;
class UAbilityTask_ApplyRootMotionJumpForce;

void UAbilityTask_ApplyRootMotionJumpForce::OnLandedCallback(const FHitResult& Hit) {
}

void UAbilityTask_ApplyRootMotionJumpForce::Finish() {
}

UAbilityTask_ApplyRootMotionJumpForce* UAbilityTask_ApplyRootMotionJumpForce::ApplyRootMotionJumpForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator NewRotation, float NewDistance, float NewHeight, float NewDuration, float NewMinimumLandedTriggerTime, bool NewBFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UCurveVector* NewPathOffsetCurve, UCurveFloat* NewTimeMappingCurve) {
    return NULL;
}

void UAbilityTask_ApplyRootMotionJumpForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionJumpForce, Rotation);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionJumpForce, Distance);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionJumpForce, Height);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionJumpForce, Duration);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionJumpForce, MinimumLandedTriggerTime);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionJumpForce, bFinishOnLanded);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionJumpForce, PathOffsetCurve);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionJumpForce, TimeMappingCurve);
}

UAbilityTask_ApplyRootMotionJumpForce::UAbilityTask_ApplyRootMotionJumpForce() {
    this->Distance = 0.00f;
    this->Height = 0.00f;
    this->Duration = 0.00f;
    this->MinimumLandedTriggerTime = 0.00f;
    this->bFinishOnLanded = false;
    this->PathOffsetCurve = NULL;
    this->TimeMappingCurve = NULL;
}


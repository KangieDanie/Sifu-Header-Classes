#include "AbilityTask_ApplyRootMotionConstantForce.h"
#include "Net/UnrealNetwork.h"

class UCurveFloat;
class UGameplayAbility;
class UAbilityTask_ApplyRootMotionConstantForce;

UAbilityTask_ApplyRootMotionConstantForce* UAbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector NewWorldDirection, float NewStrength, float NewDuration, bool NewBIsAdditive, UCurveFloat* NewStrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBEnableGravity) {
    return NULL;
}

void UAbilityTask_ApplyRootMotionConstantForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionConstantForce, WorldDirection);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionConstantForce, Strength);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionConstantForce, Duration);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionConstantForce, bIsAdditive);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionConstantForce, StrengthOverTime);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionConstantForce, bEnableGravity);
}

UAbilityTask_ApplyRootMotionConstantForce::UAbilityTask_ApplyRootMotionConstantForce() {
    this->Strength = 0.00f;
    this->Duration = 0.00f;
    this->bIsAdditive = false;
    this->StrengthOverTime = NULL;
    this->bEnableGravity = false;
}


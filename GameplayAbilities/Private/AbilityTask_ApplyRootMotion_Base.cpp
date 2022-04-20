#include "AbilityTask_ApplyRootMotion_Base.h"
#include "Net/UnrealNetwork.h"

void UAbilityTask_ApplyRootMotion_Base::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAbilityTask_ApplyRootMotion_Base, ForceName);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotion_Base, FinishVelocityMode);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotion_Base, FinishSetVelocity);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotion_Base, FinishClampVelocity);
}

UAbilityTask_ApplyRootMotion_Base::UAbilityTask_ApplyRootMotion_Base() {
    this->FinishVelocityMode = ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity;
    this->FinishClampVelocity = 0.00f;
    this->MovementComponent = NULL;
}


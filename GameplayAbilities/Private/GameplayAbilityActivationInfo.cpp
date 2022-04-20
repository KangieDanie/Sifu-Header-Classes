#include "GameplayAbilityActivationInfo.h"

FGameplayAbilityActivationInfo::FGameplayAbilityActivationInfo() {
    this->ActivationMode = EGameplayAbilityActivationMode::Authority;
    this->bCanBeEndedByOtherInstance = false;
}


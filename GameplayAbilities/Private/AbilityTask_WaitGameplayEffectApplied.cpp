#include "AbilityTask_WaitGameplayEffectApplied.h"

class UAbilitySystemComponent;

void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle) {
}

UAbilityTask_WaitGameplayEffectApplied::UAbilityTask_WaitGameplayEffectApplied() {
    this->ExternalOwner = NULL;
}


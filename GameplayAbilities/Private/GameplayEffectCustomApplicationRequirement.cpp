#include "GameplayEffectCustomApplicationRequirement.h"

class UAbilitySystemComponent;
class UGameplayEffect;

bool UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect_Implementation(const UGameplayEffect* GameplayEffect, const FGameplayEffectSpec& Spec, UAbilitySystemComponent* ASC) const {
    return false;
}

UGameplayEffectCustomApplicationRequirement::UGameplayEffectCustomApplicationRequirement() {
}


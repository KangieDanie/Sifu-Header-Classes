#include "GameplayEffectCustomApplicationRequirement.h"

class UGameplayEffect;
class UAbilitySystemComponent;

bool UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect_Implementation(const UGameplayEffect* GameplayEffect, const FGameplayEffectSpec& Spec, UAbilitySystemComponent* ASC) const {
    return false;
}

UGameplayEffectCustomApplicationRequirement::UGameplayEffectCustomApplicationRequirement() {
}


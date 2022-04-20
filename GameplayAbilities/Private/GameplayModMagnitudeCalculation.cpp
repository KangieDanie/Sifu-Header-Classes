#include "GameplayModMagnitudeCalculation.h"

float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const {
    return 0.0f;
}

UGameplayModMagnitudeCalculation::UGameplayModMagnitudeCalculation() {
    this->bAllowNonNetAuthorityDependencyRegistration = false;
}


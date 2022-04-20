#include "GameplayEffectExecutionCalculation.h"

void UGameplayEffectExecutionCalculation::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const {
}

UGameplayEffectExecutionCalculation::UGameplayEffectExecutionCalculation() {
    this->bRequiresPassedInTags = false;
}


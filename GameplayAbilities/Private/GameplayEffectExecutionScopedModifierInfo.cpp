#include "GameplayEffectExecutionScopedModifierInfo.h"

FGameplayEffectExecutionScopedModifierInfo::FGameplayEffectExecutionScopedModifierInfo() {
    this->AggregatorType = EGameplayEffectScopedModifierAggregatorType::CapturedAttributeBacked;
    this->ModifierOp = EGameplayModOp::Additive;
}


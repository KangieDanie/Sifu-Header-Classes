#include "GameplayModifierEvaluatedData.h"

FGameplayModifierEvaluatedData::FGameplayModifierEvaluatedData() {
    this->ModifierOp = EGameplayModOp::Additive;
    this->Magnitude = 0.00f;
    this->IsValid = false;
}


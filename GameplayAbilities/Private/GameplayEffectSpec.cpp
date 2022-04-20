#include "GameplayEffectSpec.h"

FGameplayEffectSpec::FGameplayEffectSpec() {
    this->Def = NULL;
    this->Duration = 0.00f;
    this->Period = 0.00f;
    this->ChanceToApplyToTarget = 0.00f;
    this->StackCount = 0;
    this->bCompletedSourceAttributeCapture = false;
    this->bCompletedTargetAttributeCapture = false;
    this->bDurationLocked = false;
    this->Level = 0.00f;
}


#include "GameplayEffect.h"

UGameplayEffect::UGameplayEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::Instant;
    this->bExecutePeriodicEffectOnApplication = true;
    this->PeriodicInhibitionPolicy = EGameplayEffectPeriodInhibitionRemovedPolicy::NeverReset;
    this->bDenyOverflowApplication = false;
    this->bClearStackOnOverflow = false;
    this->bRequireModifierSuccessToTriggerCues = true;
    this->bSuppressStackingCues = false;
    this->UIData = NULL;
    this->StackingType = EGameplayEffectStackingType::None;
    this->StackLimitCount = 0;
    this->StackDurationRefreshPolicy = EGameplayEffectStackingDurationPolicy::RefreshOnSuccessfulApplication;
    this->StackPeriodResetPolicy = EGameplayEffectStackingPeriodPolicy::ResetOnSuccessfulApplication;
    this->StackExpirationPolicy = EGameplayEffectStackingExpirationPolicy::ClearEntireStack;
}


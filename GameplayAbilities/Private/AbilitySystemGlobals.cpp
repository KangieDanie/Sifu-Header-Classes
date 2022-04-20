#include "AbilitySystemGlobals.h"

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts() {
}

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns() {
}

void UAbilitySystemGlobals::ServerEndPlayerAbility(const FString& AbilityNameMatch) {
}

void UAbilitySystemGlobals::ServerCancelPlayerAbility(const FString& AbilityNameMatch) {
}

void UAbilitySystemGlobals::ServerActivatePlayerAbility(const FString& AbilityNameMatch) {
}

void UAbilitySystemGlobals::ListPlayerAbilities() {
}

UAbilitySystemGlobals::UAbilitySystemGlobals() {
    this->MinimalReplicationTagCountBits = 5;
    this->bAllowGameplayModEvaluationChannels = false;
    this->DefaultGameplayModEvaluationChannel = EGameplayModEvaluationChannel::Channel0;
    this->GlobalCurveTable = NULL;
    this->GlobalAttributeMetaDataTable = NULL;
    this->GameplayCueNotifyPaths.AddDefaulted(1);
    this->GameplayTagResponseTable = NULL;
    this->PredictTargetGameplayEffects = true;
    this->GlobalGameplayCueManager = NULL;
}


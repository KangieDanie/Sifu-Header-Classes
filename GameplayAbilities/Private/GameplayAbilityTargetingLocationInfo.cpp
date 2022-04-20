#include "GameplayAbilityTargetingLocationInfo.h"

FGameplayAbilityTargetingLocationInfo::FGameplayAbilityTargetingLocationInfo() {
    this->LocationType = EGameplayAbilityTargetingLocationType::LiteralTransform;
    this->SourceActor = NULL;
    this->SourceComponent = NULL;
    this->SourceAbility = NULL;
}


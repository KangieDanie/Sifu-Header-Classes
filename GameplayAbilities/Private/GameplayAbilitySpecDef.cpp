#include "GameplayAbilitySpecDef.h"

FGameplayAbilitySpecDef::FGameplayAbilitySpecDef() {
    this->Ability = NULL;
    this->InputID = 0;
    this->RemovalPolicy = EGameplayEffectGrantedAbilityRemovePolicy::CancelAbilityImmediately;
    this->SourceObject = NULL;
}


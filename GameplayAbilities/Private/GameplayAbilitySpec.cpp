#include "GameplayAbilitySpec.h"

FGameplayAbilitySpec::FGameplayAbilitySpec() {
    this->Ability = NULL;
    this->Level = 0;
    this->InputID = 0;
    this->SourceObject = NULL;
    this->ActiveCount = 0;
    this->InputPressed = false;
    this->RemoveAfterActivation = false;
    this->PendingRemove = false;
    this->bActivateOnce = false;
}


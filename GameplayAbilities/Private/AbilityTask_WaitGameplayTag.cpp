#include "AbilityTask_WaitGameplayTag.h"

void UAbilityTask_WaitGameplayTag::GameplayTagCallback(const FGameplayTag Tag, int32 NewCount) {
}

UAbilityTask_WaitGameplayTag::UAbilityTask_WaitGameplayTag() {
    this->OptionalExternalTarget = NULL;
}


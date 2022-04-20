#include "AbilityTask_WaitAbilityCommit.h"

class UGameplayAbility;
class UAbilityTask_WaitAbilityCommit;

UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce) {
    return NULL;
}

UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce) {
    return NULL;
}

void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(UGameplayAbility* ActivatedAbility) {
}

UAbilityTask_WaitAbilityCommit::UAbilityTask_WaitAbilityCommit() {
}


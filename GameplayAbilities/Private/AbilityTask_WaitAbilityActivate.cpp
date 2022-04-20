#include "AbilityTask_WaitAbilityActivate.h"

class UGameplayAbility;
class UAbilityTask_WaitAbilityActivate;

UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivateWithTagRequirements(UGameplayAbility* OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce) {
    return NULL;
}

UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce) {
    return NULL;
}

UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce) {
    return NULL;
}

void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(UGameplayAbility* ActivatedAbility) {
}

UAbilityTask_WaitAbilityActivate::UAbilityTask_WaitAbilityActivate() {
}


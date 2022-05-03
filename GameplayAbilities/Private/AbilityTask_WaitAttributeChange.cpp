#include "AbilityTask_WaitAttributeChange.h"

class UGameplayAbility;
class AActor;
class UAbilityTask_WaitAttributeChange;

UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChangeWithComparison(UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison::Type> InComparisonType, float InComparisonValue, bool TriggerOnce, AActor* OptionalExternalOwner) {
    return NULL;
}

UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChange(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, AActor* OptionalExternalOwner) {
    return NULL;
}

UAbilityTask_WaitAttributeChange::UAbilityTask_WaitAttributeChange() {
    this->ExternalOwner = NULL;
}


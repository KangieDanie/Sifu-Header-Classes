#include "AbilityTask_VisualizeTargeting.h"
#include "Templates/SubclassOf.h"

class UGameplayAbility;
class AGameplayAbilityTargetActor;
class UAbilityTask_VisualizeTargeting;

UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargetingUsingActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float Duration) {
    return NULL;
}

UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargeting(UGameplayAbility* OwningAbility, TSubclassOf<AGameplayAbilityTargetActor> Class, FName TaskInstanceName, float Duration) {
    return NULL;
}

void UAbilityTask_VisualizeTargeting::FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor) {
}

bool UAbilityTask_VisualizeTargeting::BeginSpawningActor(UGameplayAbility* OwningAbility, TSubclassOf<AGameplayAbilityTargetActor> Class, AGameplayAbilityTargetActor*& SpawnedActor) {
    return false;
}

UAbilityTask_VisualizeTargeting::UAbilityTask_VisualizeTargeting() {
}


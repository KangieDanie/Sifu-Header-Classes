#include "AbilityTask_WaitTargetData.h"
#include "Templates/SubclassOf.h"

class UGameplayAbility;
class UAbilityTask_WaitTargetData;
class AGameplayAbilityTargetActor;

UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetDataUsingActor(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, AGameplayAbilityTargetActor* NewTargetActor) {
    return NULL;
}

UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetData(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, TSubclassOf<AGameplayAbilityTargetActor> Class) {
    return NULL;
}

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback() {
}

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag) {
}

void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data) {
}

void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data) {
}

void UAbilityTask_WaitTargetData::FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor) {
}

bool UAbilityTask_WaitTargetData::BeginSpawningActor(UGameplayAbility* OwningAbility, TSubclassOf<AGameplayAbilityTargetActor> Class, AGameplayAbilityTargetActor*& SpawnedActor) {
    return false;
}

UAbilityTask_WaitTargetData::UAbilityTask_WaitTargetData() {
    this->TargetClass = NULL;
    this->TargetActor = NULL;
}


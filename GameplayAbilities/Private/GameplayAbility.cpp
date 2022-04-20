#include "GameplayAbility.h"
#include "Templates/SubclassOf.h"

class AActor;
class UGameplayEffect;
class USkeletalMeshComponent;
class UObject;
class UAnimMontage;
class UAbilitySystemComponent;

void UGameplayAbility::SetShouldBlockOtherAbilities(bool bShouldBlockAbilities) {
}

void UGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled) {
}

void UGameplayAbility::SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload) {
}

void UGameplayAbility::RemoveGrantedByEffect() {
}

void UGameplayAbility::MontageStop(float OverrideBlendOutTime) {
}

void UGameplayAbility::MontageSetNextSectionName(FName FromSectionName, FName ToSectionName) {
}

void UGameplayAbility::MontageJumpToSection(FName SectionName) {
}

FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName) {
    return FGameplayAbilityTargetingLocationInfo{};
}

FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor() {
    return FGameplayAbilityTargetingLocationInfo{};
}

FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level) const {
    return FGameplayEffectSpecHandle{};
}


void UGameplayAbility::K2_RemoveGameplayCue(FGameplayTag GameplayCueTag) {
}


bool UGameplayAbility::K2_HasAuthority() const {
    return false;
}

void UGameplayAbility::K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters) {
}

void UGameplayAbility::K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context) {
}

void UGameplayAbility::K2_EndAbility() {
}


bool UGameplayAbility::K2_CommitAbilityCost(bool BroadcastCommitEvent) {
    return false;
}

bool UGameplayAbility::K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown) {
    return false;
}

bool UGameplayAbility::K2_CommitAbility() {
    return false;
}

bool UGameplayAbility::K2_CheckAbilityCost() {
    return false;
}

bool UGameplayAbility::K2_CheckAbilityCooldown() {
    return false;
}

void UGameplayAbility::K2_CancelAbility() {
}


TArray<FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(const FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData) {
    return TArray<FActiveGameplayEffectHandle>();
}

FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(const FGameplayEffectSpecHandle EffectSpecHandle) {
    return FActiveGameplayEffectHandle{};
}

void UGameplayAbility::K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd) {
}

void UGameplayAbility::K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd) {
}



bool UGameplayAbility::IsLocallyControlled() const {
    return false;
}

void UGameplayAbility::InvalidateClientPredictionKey() const {
}

USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo() const {
    return NULL;
}

AActor* UGameplayAbility::GetOwningActorFromActorInfo() const {
    return NULL;
}

FGameplayEffectContextHandle UGameplayAbility::GetGrantedByEffectContext() const {
    return FGameplayEffectContextHandle{};
}

UObject* UGameplayAbility::GetCurrentSourceObject() const {
    return NULL;
}

UAnimMontage* UGameplayAbility::GetCurrentMontage() const {
    return NULL;
}

float UGameplayAbility::GetCooldownTimeRemaining() const {
    return 0.0f;
}

FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData) const {
    return FGameplayEffectContextHandle{};
}

AActor* UGameplayAbility::GetAvatarActorFromActorInfo() const {
    return NULL;
}

FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo() const {
    return FGameplayAbilityActorInfo{};
}

UAbilitySystemComponent* UGameplayAbility::GetAbilitySystemComponentFromActorInfo() const {
    return NULL;
}

int32 UGameplayAbility::GetAbilityLevel() const {
    return 0;
}

void UGameplayAbility::EndTaskByInstanceName(FName InstanceName) {
}

void UGameplayAbility::EndAbilityState(FName OptionalStateNameToEnd) {
}

void UGameplayAbility::ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask) {
}

void UGameplayAbility::CancelTaskByInstanceName(FName InstanceName) {
}

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32 StacksToRemove) {
}

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32 StacksToRemove) {
}

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32 StacksToRemove) {
}

TArray<FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks) {
    return TArray<FActiveGameplayEffectHandle>();
}

FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(TSubclassOf<UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks) {
    return FActiveGameplayEffectHandle{};
}

UGameplayAbility::UGameplayAbility() {
    this->bReplicateInputDirectly = false;
    this->RemoteInstanceEnded = false;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateNo;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerExecution;
    this->bServerRespectsRemoteAbilityCancellation = true;
    this->bRetriggerInstancedAbility = false;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;
    this->CostGameplayEffectClass = NULL;
    this->CooldownGameplayEffectClass = NULL;
    this->CurrentMontage = NULL;
    this->bIsActive = false;
    this->bIsCancelable = false;
    this->bIsBlockingOtherAbilities = false;
    this->bMarkPendingKillOnAbilityEnd = false;
}


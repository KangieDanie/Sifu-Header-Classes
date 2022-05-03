#include "AbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UGameplayAbility;
class UAbilitySystemComponent;
class UGameplayEffect;
class UAnimMontage;
class UAttributeSet;
class UDataTable;

bool UAbilitySystemComponent::TryActivateAbilityByClass(TSubclassOf<UGameplayAbility> InAbilityToActivate, bool bAllowRemoteActivation) {
    return false;
}

bool UAbilitySystemComponent::TryActivateAbilitiesByTag(const FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation) {
    return false;
}

void UAbilitySystemComponent::TargetConfirm() {
}

void UAbilitySystemComponent::TargetCancel() {
}

void UAbilitySystemComponent::SetUserAbilityActivationInhibited(bool NewInhibit) {
}

void UAbilitySystemComponent::SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32 NewLevel) {
}

void UAbilitySystemComponent::SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32 NewLevel) {
}

void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData) {
}
bool UAbilitySystemComponent::ServerTryActivateAbilityWithEventData_Validate(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData) {
    return true;
}

void UAbilitySystemComponent::ServerTryActivateAbility_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey) {
}
bool UAbilitySystemComponent::ServerTryActivateAbility_Validate(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey) {
    return true;
}

void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled_Implementation(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey) {
}
bool UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled_Validate(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey) {
    return true;
}

void UAbilitySystemComponent::ServerSetReplicatedTargetData_Implementation(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, const FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey) {
}
bool UAbilitySystemComponent::ServerSetReplicatedTargetData_Validate(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, const FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey) {
    return true;
}

void UAbilitySystemComponent::ServerSetReplicatedEventWithPayload_Implementation(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload) {
}
bool UAbilitySystemComponent::ServerSetReplicatedEventWithPayload_Validate(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload) {
    return true;
}

void UAbilitySystemComponent::ServerSetReplicatedEvent_Implementation(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey) {
}
bool UAbilitySystemComponent::ServerSetReplicatedEvent_Validate(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey) {
    return true;
}

void UAbilitySystemComponent::ServerSetInputReleased_Implementation(FGameplayAbilitySpecHandle AbilityHandle) {
}
bool UAbilitySystemComponent::ServerSetInputReleased_Validate(FGameplayAbilitySpecHandle AbilityHandle) {
    return true;
}

void UAbilitySystemComponent::ServerSetInputPressed_Implementation(FGameplayAbilitySpecHandle AbilityHandle) {
}
bool UAbilitySystemComponent::ServerSetInputPressed_Validate(FGameplayAbilitySpecHandle AbilityHandle) {
    return true;
}

void UAbilitySystemComponent::ServerPrintDebug_RequestWithStrings_Implementation(const TArray<FString>& Strings) {
}
bool UAbilitySystemComponent::ServerPrintDebug_RequestWithStrings_Validate(const TArray<FString>& Strings) {
    return true;
}

void UAbilitySystemComponent::ServerPrintDebug_Request_Implementation() {
}
bool UAbilitySystemComponent::ServerPrintDebug_Request_Validate() {
    return true;
}

void UAbilitySystemComponent::ServerEndAbility_Implementation(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey) {
}
bool UAbilitySystemComponent::ServerEndAbility_Validate(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey) {
    return true;
}

void UAbilitySystemComponent::ServerCurrentMontageSetPlayRate_Implementation(UAnimMontage* ClientAnimMontage, float InPlayRate) {
}
bool UAbilitySystemComponent::ServerCurrentMontageSetPlayRate_Validate(UAnimMontage* ClientAnimMontage, float InPlayRate) {
    return true;
}

void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName_Implementation(UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName) {
}
bool UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName_Validate(UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName) {
    return true;
}

void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName_Implementation(UAnimMontage* ClientAnimMontage, FName SectionName) {
}
bool UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName_Validate(UAnimMontage* ClientAnimMontage, FName SectionName) {
    return true;
}

void UAbilitySystemComponent::ServerCancelAbility_Implementation(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo) {
}
bool UAbilitySystemComponent::ServerCancelAbility_Validate(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo) {
    return true;
}

void UAbilitySystemComponent::ServerAbilityRPCBatch_Implementation(FServerAbilityRPCBatch BatchInfo) {
}
bool UAbilitySystemComponent::ServerAbilityRPCBatch_Validate(FServerAbilityRPCBatch BatchInfo) {
    return true;
}

void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(TSubclassOf<UGameplayEffect> GameplayEffect, UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32 StacksToRemove) {
}

bool UAbilitySystemComponent::RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32 StacksToRemove) {
    return false;
}

int32 UAbilitySystemComponent::RemoveActiveEffectsWithTags(FGameplayTagContainer Tags) {
    return 0;
}

int32 UAbilitySystemComponent::RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags) {
    return 0;
}

int32 UAbilitySystemComponent::RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags) {
    return 0;
}

int32 UAbilitySystemComponent::RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags) {
    return 0;
}

void UAbilitySystemComponent::OnRep_ServerDebugString() {
}

void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage() {
}

void UAbilitySystemComponent::OnRep_OwningActor() {
}

void UAbilitySystemComponent::OnRep_ClientDebugString() {
}

void UAbilitySystemComponent::OnRep_ActivateAbilities() {
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) {
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext) {
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) {
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) {
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec_Implementation(const FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey) {
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext) {
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) {
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Implementation(const FGameplayEffectSpecForRPC& Spec, FPredictionKey PredictionKey) {
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters) {
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext) {
}

FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level, FGameplayEffectContextHandle Context) const {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectContextHandle UAbilitySystemComponent::MakeEffectContext() const {
    return FGameplayEffectContextHandle{};
}

void UAbilitySystemComponent::K2_InitStats(TSubclassOf<UAttributeSet> Attributes, const UDataTable* DataTable) {
}

bool UAbilitySystemComponent::IsGameplayCueActive(const FGameplayTag GameplayCueTag) const {
    return false;
}

bool UAbilitySystemComponent::GetUserAbilityActivationInhibited() const {
    return false;
}

float UAbilitySystemComponent::GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute) const {
    return 0.0f;
}

int32 UAbilitySystemComponent::GetGameplayEffectCount(TSubclassOf<UGameplayEffect> SourceGameplayEffect, UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck) {
    return 0;
}

TArray<FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffectsWithAllTags(FGameplayTagContainer Tags) const {
    return TArray<FActiveGameplayEffectHandle>();
}

TArray<FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffects(const FGameplayEffectQuery& Query) const {
    return TArray<FActiveGameplayEffectHandle>();
}

void UAbilitySystemComponent::ClientTryActivateAbility_Implementation(FGameplayAbilitySpecHandle AbilityToActivate) {
}

void UAbilitySystemComponent::ClientSetReplicatedEvent_Implementation(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey) {
}

void UAbilitySystemComponent::ClientPrintDebug_Response_Implementation(const TArray<FString>& Strings, int32 GameFlags) {
}

void UAbilitySystemComponent::ClientEndAbility_Implementation(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo) {
}

void UAbilitySystemComponent::ClientCancelAbility_Implementation(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo) {
}

void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData) {
}

void UAbilitySystemComponent::ClientActivateAbilitySucceed_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey) {
}

void UAbilitySystemComponent::ClientActivateAbilityFailed_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, int16 PredictionKey) {
}

FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(TSubclassOf<UGameplayEffect> GameplayEffectClass, UAbilitySystemComponent* Target, float Level, FGameplayEffectContextHandle Context) {
    return FActiveGameplayEffectHandle{};
}

FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext) {
    return FActiveGameplayEffectHandle{};
}

FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(const FGameplayEffectSpecHandle& SpecHandle, UAbilitySystemComponent* Target) {
    return FActiveGameplayEffectHandle{};
}

FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(const FGameplayEffectSpecHandle& SpecHandle) {
    return FActiveGameplayEffectHandle{};
}

void UAbilitySystemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAbilitySystemComponent, SpawnedAttributes);
    DOREPLIFETIME(UAbilitySystemComponent, ClientDebugStrings);
    DOREPLIFETIME(UAbilitySystemComponent, ServerDebugStrings);
    DOREPLIFETIME(UAbilitySystemComponent, OwnerActor);
    DOREPLIFETIME(UAbilitySystemComponent, AvatarActor);
    DOREPLIFETIME(UAbilitySystemComponent, ActivatableAbilities);
    DOREPLIFETIME(UAbilitySystemComponent, RepAnimMontageInfo);
    DOREPLIFETIME(UAbilitySystemComponent, ActiveGameplayEffects);
    DOREPLIFETIME(UAbilitySystemComponent, ActiveGameplayCues);
    DOREPLIFETIME(UAbilitySystemComponent, MinimalReplicationGameplayCues);
    DOREPLIFETIME(UAbilitySystemComponent, BlockedAbilityBindings);
    DOREPLIFETIME(UAbilitySystemComponent, MinimalReplicationTags);
    DOREPLIFETIME(UAbilitySystemComponent, ReplicatedPredictionKeyMap);
}

UAbilitySystemComponent::UAbilitySystemComponent() {
    this->OutgoingDuration = 0.00f;
    this->IncomingDuration = 0.00f;
    this->UserAbilityActivationInhibited = false;
    this->ReplicationProxyEnabled = false;
    this->bSuppressGrantAbility = false;
    this->bSuppressGameplayCues = false;
    this->OwnerActor = NULL;
    this->AvatarActor = NULL;
    this->bCachedIsNetSimulated = false;
    this->bPendingMontageRep = false;
}


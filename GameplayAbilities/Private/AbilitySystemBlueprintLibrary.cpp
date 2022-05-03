#include "AbilitySystemBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class UGameplayEffect;
class UAbilitySystemComponent;
class AActor;
class UObject;
class UPhysicalMaterial;
class USceneComponent;
class UGameplayCueInterface;
class IGameplayCueInterface;

bool UAbilitySystemBlueprintLibrary::TargetDataHasOrigin(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index) {
    return false;
}

bool UAbilitySystemBlueprintLibrary::TargetDataHasHitResult(const FGameplayAbilityTargetDataHandle& HitResult, int32 Index) {
    return false;
}

bool UAbilitySystemBlueprintLibrary::TargetDataHasEndPoint(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index) {
    return false;
}

bool UAbilitySystemBlueprintLibrary::TargetDataHasActor(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index) {
    return false;
}

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCountToMax(FGameplayEffectSpecHandle SpecHandle) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCount(FGameplayEffectSpecHandle SpecHandle, int32 StackCount) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetDuration(FGameplayEffectSpecHandle SpecHandle, float Duration) {
    return FGameplayEffectSpecHandle{};
}

void UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(AActor* Actor, FGameplayTag EventTag, FGameplayEventData Payload) {
}

bool UAbilitySystemBlueprintLibrary::NotEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB) {
    return false;
}

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::MakeSpecHandle(UGameplayEffect* InGameplayEffect, AActor* InInstigator, AActor* InEffectCauser, float InLevel) {
    return FGameplayEffectSpecHandle{};
}

FGameplayCueParameters UAbilitySystemBlueprintLibrary::MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, FGameplayEffectContextHandle EffectContext, FGameplayTag MatchedTagName, FGameplayTag OriginalTag, FGameplayTagContainer AggregatedSourceTags, FGameplayTagContainer AggregatedTargetTags, FVector Location, FVector Normal, AActor* Instigator, AActor* EffectCauser, UObject* SourceObject, UPhysicalMaterial* PhysicalMaterial, int32 GameplayEffectLevel, int32 AbilityLevel, USceneComponent* TargetAttachComponent) {
    return FGameplayCueParameters{};
}

FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::MakeFilterHandle(FGameplayTargetDataFilter Filter, AActor* FilterActor) {
    return FGameplayTargetDataFilterHandle{};
}

bool UAbilitySystemBlueprintLibrary::IsValid(FGameplayAttribute Attribute) {
    return false;
}

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlledPlayer(FGameplayCueParameters Parameters) {
    return false;
}

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlled(FGameplayCueParameters Parameters) {
    return false;
}

bool UAbilitySystemBlueprintLibrary::HasHitResult(FGameplayCueParameters Parameters) {
    return false;
}

FTransform UAbilitySystemBlueprintLibrary::GetTargetDataOrigin(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index) {
    return FTransform{};
}

FTransform UAbilitySystemBlueprintLibrary::GetTargetDataEndPointTransform(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index) {
    return FTransform{};
}

FVector UAbilitySystemBlueprintLibrary::GetTargetDataEndPoint(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index) {
    return FVector{};
}

FVector UAbilitySystemBlueprintLibrary::GetOrigin(FGameplayCueParameters Parameters) {
    return FVector{};
}

float UAbilitySystemBlueprintLibrary::GetModifiedAttributeMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayAttribute Attribute) {
    return 0.0f;
}

FTransform UAbilitySystemBlueprintLibrary::GetInstigatorTransform(FGameplayCueParameters Parameters) {
    return FTransform{};
}

AActor* UAbilitySystemBlueprintLibrary::GetInstigatorActor(FGameplayCueParameters Parameters) {
    return NULL;
}

FHitResult UAbilitySystemBlueprintLibrary::GetHitResultFromTargetData(const FGameplayAbilityTargetDataHandle& HitResult, int32 Index) {
    return FHitResult{};
}

FHitResult UAbilitySystemBlueprintLibrary::GetHitResult(FGameplayCueParameters Parameters) {
    return FHitResult{};
}

bool UAbilitySystemBlueprintLibrary::GetGameplayCueEndLocationAndNormal(AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Location, FVector& Normal) {
    return false;
}

bool UAbilitySystemBlueprintLibrary::GetGameplayCueDirection(AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Direction) {
    return false;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttributeFromAbilitySystemComponent(const UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute) {
    return 0.0f;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBaseFromAbilitySystemComponent(const UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute) {
    return 0.0f;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBase(const AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute) {
    return 0.0f;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttribute(const AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute) {
    return 0.0f;
}

FGameplayEffectContextHandle UAbilitySystemBlueprintLibrary::GetEffectContext(FGameplayEffectSpecHandle SpecHandle) {
    return FGameplayEffectContextHandle{};
}

int32 UAbilitySystemBlueprintLibrary::GetDataCountFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData) {
    return 0;
}

TArray<FGameplayEffectSpecHandle> UAbilitySystemBlueprintLibrary::GetAllLinkedGameplayEffectSpecHandles(FGameplayEffectSpecHandle SpecHandle) {
    return TArray<FGameplayEffectSpecHandle>();
}

TArray<AActor*> UAbilitySystemBlueprintLibrary::GetAllActorsFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData) {
    return TArray<AActor*>();
}

TArray<AActor*> UAbilitySystemBlueprintLibrary::GetActorsFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index) {
    return TArray<AActor*>();
}

int32 UAbilitySystemBlueprintLibrary::GetActorCount(FGameplayCueParameters Parameters) {
    return 0;
}

AActor* UAbilitySystemBlueprintLibrary::GetActorByIndex(FGameplayCueParameters Parameters, int32 Index) {
    return NULL;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle) {
    return 0.0f;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStartTime(FActiveGameplayEffectHandle ActiveHandle) {
    return 0.0f;
}

int32 UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackLimitCount(FActiveGameplayEffectHandle ActiveHandle) {
    return 0;
}

int32 UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackCount(FActiveGameplayEffectHandle ActiveHandle) {
    return 0;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectRemainingDuration(UObject* WorldContextObject, FActiveGameplayEffectHandle ActiveHandle) {
    return 0.0f;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectExpectedEndTime(FActiveGameplayEffectHandle ActiveHandle) {
    return 0.0f;
}

FString UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectDebugString(FActiveGameplayEffectHandle ActiveHandle) {
    return TEXT("");
}

UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(AActor* Actor) {
    return NULL;
}

void UAbilitySystemBlueprintLibrary::ForwardGameplayCueToTarget(TScriptInterface<IGameplayCueInterface> TargetCueInterface, TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::FilterTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTargetDataFilterHandle ActorFilterClass) {
    return FGameplayAbilityTargetDataHandle{};
}

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTagsAndBase(UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess) {
    return 0.0f;
}

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTags(UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags, bool& bSuccess) {
    return 0.0f;
}

bool UAbilitySystemBlueprintLibrary::EqualEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB) {
    return false;
}

void UAbilitySystemBlueprintLibrary::EffectContextSetOrigin(FGameplayEffectContextHandle EffectContext, FVector Origin) {
}

bool UAbilitySystemBlueprintLibrary::EffectContextIsValid(FGameplayEffectContextHandle EffectContext) {
    return false;
}

bool UAbilitySystemBlueprintLibrary::EffectContextIsInstigatorLocallyControlled(FGameplayEffectContextHandle EffectContext) {
    return false;
}

bool UAbilitySystemBlueprintLibrary::EffectContextHasHitResult(FGameplayEffectContextHandle EffectContext) {
    return false;
}

UObject* UAbilitySystemBlueprintLibrary::EffectContextGetSourceObject(FGameplayEffectContextHandle EffectContext) {
    return NULL;
}

AActor* UAbilitySystemBlueprintLibrary::EffectContextGetOriginalInstigatorActor(FGameplayEffectContextHandle EffectContext) {
    return NULL;
}

FVector UAbilitySystemBlueprintLibrary::EffectContextGetOrigin(FGameplayEffectContextHandle EffectContext) {
    return FVector{};
}

AActor* UAbilitySystemBlueprintLibrary::EffectContextGetInstigatorActor(FGameplayEffectContextHandle EffectContext) {
    return NULL;
}

FHitResult UAbilitySystemBlueprintLibrary::EffectContextGetHitResult(FGameplayEffectContextHandle EffectContext) {
    return FHitResult{};
}

AActor* UAbilitySystemBlueprintLibrary::EffectContextGetEffectCauser(FGameplayEffectContextHandle EffectContext) {
    return NULL;
}

void UAbilitySystemBlueprintLibrary::EffectContextAddHitResult(FGameplayEffectContextHandle EffectContext, FHitResult HitResult, bool bReset) {
}

bool UAbilitySystemBlueprintLibrary::DoesTargetDataContainActor(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index, AActor* Actor) {
    return false;
}

bool UAbilitySystemBlueprintLibrary::DoesGameplayCueMeetTagRequirements(FGameplayCueParameters Parameters, const FGameplayTagRequirements& SourceTagReqs, const FGameplayTagRequirements& TargetTagReqs) {
    return false;
}

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::CloneSpecHandle(AActor* InNewInstigator, AActor* InEffectCauser, FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone) {
    return FGameplayEffectSpecHandle{};
}

void UAbilitySystemBlueprintLibrary::BreakGameplayCueParameters(const FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, FGameplayEffectContextHandle& EffectContext, FGameplayTag& MatchedTagName, FGameplayTag& OriginalTag, FGameplayTagContainer& AggregatedSourceTags, FGameplayTagContainer& AggregatedTargetTags, FVector& Location, FVector& Normal, AActor*& Instigator, AActor*& EffectCauser, UObject*& SourceObject, UPhysicalMaterial*& PhysicalMaterial, int32& GameplayEffectLevel, int32& AbilityLevel, USceneComponent*& TargetAttachComponent) {
}

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayTag DataTag, float Magnitude) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FName DataName, float Magnitude) {
    return FGameplayEffectSpecHandle{};
}

FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AppendTargetDataHandle(FGameplayAbilityTargetDataHandle TargetHandle, const FGameplayAbilityTargetDataHandle& HandleToAdd) {
    return FGameplayAbilityTargetDataHandle{};
}

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffectSpec(FGameplayEffectSpecHandle SpecHandle, FGameplayEffectSpecHandle LinkedGameplayEffectSpec) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffect(FGameplayEffectSpecHandle SpecHandle, TSubclassOf<UGameplayEffect> LinkedGameplayEffect) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag) {
    return FGameplayEffectSpecHandle{};
}

FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromLocations(const FGameplayAbilityTargetingLocationInfo& SourceLocation, const FGameplayAbilityTargetingLocationInfo& TargetLocation) {
    return FGameplayAbilityTargetDataHandle{};
}

FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromHitResult(const FHitResult& HitResult) {
    return FGameplayAbilityTargetDataHandle{};
}

FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(const TArray<AActor*>& ActorArray, bool OneTargetPerHandle) {
    return FGameplayAbilityTargetDataHandle{};
}

FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(AActor* Actor) {
    return FGameplayAbilityTargetDataHandle{};
}

UAbilitySystemBlueprintLibrary::UAbilitySystemBlueprintLibrary() {
}


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GameplayTagRequirements.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GameplayAbilityTargetDataHandle.h"
#include "GameplayEventData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayEffectSpecHandle.h"
#include "GameplayAttribute.h"
#include "GameplayCueParameters.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "GameplayEffectContextHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GameplayTargetDataFilterHandle.h"
#include "GameplayTargetDataFilter.h"
#include "ActiveGameplayEffectHandle.h"
#include "EGameplayCueEvent.h"
#include "GameplayAbilityTargetingLocationInfo.h"
#include "AbilitySystemBlueprintLibrary.generated.h"

class AActor;
class UGameplayEffect;
class UObject;
class UPhysicalMaterial;
class USceneComponent;
class UAbilitySystemComponent;
class UGameplayCueInterface;
class IGameplayCueInterface;

UCLASS(BlueprintType)
class GAMEPLAYABILITIES_API UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAbilitySystemBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static bool TargetDataHasOrigin(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static bool TargetDataHasHitResult(const FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static bool TargetDataHasEndPoint(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static bool TargetDataHasActor(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle SetStackCountToMax(FGameplayEffectSpecHandle SpecHandle);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle SetStackCount(FGameplayEffectSpecHandle SpecHandle, int32 StackCount);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle SetDuration(FGameplayEffectSpecHandle SpecHandle, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void SendGameplayEventToActor(AActor* Actor, FGameplayTag EventTag, FGameplayEventData Payload);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);
    
    UFUNCTION(BlueprintPure)
    static FGameplayEffectSpecHandle MakeSpecHandle(UGameplayEffect* InGameplayEffect, AActor* InInstigator, AActor* InEffectCauser, float InLevel);
    
    UFUNCTION(BlueprintPure)
    static FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, FGameplayEffectContextHandle EffectContext, FGameplayTag MatchedTagName, FGameplayTag OriginalTag, FGameplayTagContainer AggregatedSourceTags, FGameplayTagContainer AggregatedTargetTags, FVector Location, FVector Normal, AActor* Instigator, AActor* EffectCauser, UObject* SourceObject, UPhysicalMaterial* PhysicalMaterial, int32 GameplayEffectLevel, int32 AbilityLevel, USceneComponent* TargetAttachComponent);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTargetDataFilterHandle MakeFilterHandle(FGameplayTargetDataFilter Filter, AActor* FilterActor);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid(FGameplayAttribute Attribute);
    
    UFUNCTION(BlueprintPure)
    static bool IsInstigatorLocallyControlledPlayer(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintPure)
    static bool IsInstigatorLocallyControlled(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintPure)
    static bool HasHitResult(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetTargetDataOrigin(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetTargetDataEndPointTransform(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static FVector GetTargetDataEndPoint(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static FVector GetOrigin(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    static float GetModifiedAttributeMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayAttribute Attribute);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetInstigatorTransform(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetInstigatorActor(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintPure)
    static FHitResult GetHitResultFromTargetData(const FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static FHitResult GetHitResult(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintPure)
    static bool GetGameplayCueEndLocationAndNormal(AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Location, FVector& Normal);
    
    UFUNCTION(BlueprintPure)
    static bool GetGameplayCueDirection(AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Direction);
    
    UFUNCTION(BlueprintPure)
    static float GetFloatAttributeFromAbilitySystemComponent(const UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    
    UFUNCTION(BlueprintPure)
    static float GetFloatAttributeBaseFromAbilitySystemComponent(const UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    
    UFUNCTION(BlueprintPure)
    static float GetFloatAttributeBase(const AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    
    UFUNCTION(BlueprintPure)
    static float GetFloatAttribute(const AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectContextHandle GetEffectContext(FGameplayEffectSpecHandle SpecHandle);
    
    UFUNCTION(BlueprintPure)
    static int32 GetDataCountFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData);
    
    UFUNCTION(BlueprintPure)
    static TArray<FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(FGameplayEffectSpecHandle SpecHandle);
    
    UFUNCTION(BlueprintPure)
    static TArray<AActor*> GetAllActorsFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData);
    
    UFUNCTION(BlueprintPure)
    static TArray<AActor*> GetActorsFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static int32 GetActorCount(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetActorByIndex(FGameplayCueParameters Parameters, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static float GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable)
    static float GetActiveGameplayEffectStartTime(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetActiveGameplayEffectStackLimitCount(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetActiveGameplayEffectStackCount(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable)
    static float GetActiveGameplayEffectRemainingDuration(UObject* WorldContextObject, FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable)
    static float GetActiveGameplayEffectExpectedEndTime(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintPure)
    static FString GetActiveGameplayEffectDebugString(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintPure)
    static UAbilitySystemComponent* GetAbilitySystemComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ForwardGameplayCueToTarget(TScriptInterface<IGameplayCueInterface> TargetCueInterface, TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintPure)
    static FGameplayAbilityTargetDataHandle FilterTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTargetDataFilterHandle ActorFilterClass);
    
    UFUNCTION(BlueprintPure)
    static float EvaluateAttributeValueWithTagsAndBase(UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess);
    
    UFUNCTION(BlueprintPure)
    static float EvaluateAttributeValueWithTags(UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags, bool& bSuccess);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);
    
    UFUNCTION(BlueprintCallable)
    static void EffectContextSetOrigin(FGameplayEffectContextHandle EffectContext, FVector Origin);
    
    UFUNCTION(BlueprintPure)
    static bool EffectContextIsValid(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintPure)
    static bool EffectContextIsInstigatorLocallyControlled(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintPure)
    static bool EffectContextHasHitResult(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintPure)
    static UObject* EffectContextGetSourceObject(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintPure)
    static AActor* EffectContextGetOriginalInstigatorActor(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintPure)
    static FVector EffectContextGetOrigin(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintPure)
    static AActor* EffectContextGetInstigatorActor(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintPure)
    static FHitResult EffectContextGetHitResult(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintPure)
    static AActor* EffectContextGetEffectCauser(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable)
    static void EffectContextAddHitResult(FGameplayEffectContextHandle EffectContext, FHitResult HitResult, bool bReset);
    
    UFUNCTION(BlueprintPure)
    static bool DoesTargetDataContainActor(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index, AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool DoesGameplayCueMeetTagRequirements(FGameplayCueParameters Parameters, const FGameplayTagRequirements& SourceTagReqs, const FGameplayTagRequirements& TargetTagReqs);
    
    UFUNCTION(BlueprintPure)
    static FGameplayEffectSpecHandle CloneSpecHandle(AActor* InNewInstigator, AActor* InEffectCauser, FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone);
    
    UFUNCTION(BlueprintPure)
    static void BreakGameplayCueParameters(const FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, FGameplayEffectContextHandle& EffectContext, FGameplayTag& MatchedTagName, FGameplayTag& OriginalTag, FGameplayTagContainer& AggregatedSourceTags, FGameplayTagContainer& AggregatedTargetTags, FVector& Location, FVector& Normal, AActor*& Instigator, AActor*& EffectCauser, UObject*& SourceObject, UPhysicalMaterial*& PhysicalMaterial, int32& GameplayEffectLevel, int32& AbilityLevel, USceneComponent*& TargetAttachComponent);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayTag DataTag, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AssignSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FName DataName, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAbilityTargetDataHandle AppendTargetDataHandle(FGameplayAbilityTargetDataHandle TargetHandle, const FGameplayAbilityTargetDataHandle& HandleToAdd);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(FGameplayEffectSpecHandle SpecHandle, FGameplayEffectSpecHandle LinkedGameplayEffectSpec);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AddLinkedGameplayEffect(FGameplayEffectSpecHandle SpecHandle, TSubclassOf<UGameplayEffect> LinkedGameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AddGrantedTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AddGrantedTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AddAssetTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AddAssetTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);
    
    UFUNCTION(BlueprintPure)
    static FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(const FGameplayAbilityTargetingLocationInfo& SourceLocation, const FGameplayAbilityTargetingLocationInfo& TargetLocation);
    
    UFUNCTION(BlueprintPure)
    static FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintPure)
    static FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(const TArray<AActor*>& ActorArray, bool OneTargetPerHandle);
    
    UFUNCTION(BlueprintPure)
    static FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(AActor* Actor);
    
};


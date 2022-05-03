#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTasksComponent -FallbackName=GameplayTasksComponent
#include "GameplayAttribute.h"
#include "ActiveGameplayEffectHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagAssetInterface -FallbackName=GameplayTagAssetInterface
#include "AbilitySystemReplicationProxyInterface.h"
#include "AttributeDefaults.h"
#include "GameplayAbilitySpecContainer.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayAbilityLocalAnimMontage.h"
#include "GameplayAbilityRepAnimMontage.h"
#include "ActiveGameplayEffectsContainer.h"
#include "MinimalReplicationTagCountMap.h"
#include "ActiveGameplayCueContainer.h"
#include "ReplicatedPredictionKeyMap.h"
#include "GameplayAbilityActivationInfo.h"
#include "GameplayEffectQuery.h"
#include "PredictionKey.h"
#include "GameplayEventData.h"
#include "GameplayAbilityTargetDataHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EAbilityGenericReplicatedEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize100 -FallbackName=Vector_NetQuantize100
#include "GameplayEffectContextHandle.h"
#include "ServerAbilityRPCBatch.h"
#include "GameplayCueParameters.h"
#include "GameplayEffectSpecForRPC.h"
#include "GameplayEffectSpecHandle.h"
#include "AbilitySystemComponent.generated.h"

class AActor;
class UAbilitySystemComponent;
class AGameplayAbilityTargetActor;
class UAttributeSet;
class UGameplayAbility;
class UGameplayEffect;
class UAnimMontage;
class UDataTable;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPLAYABILITIES_API UAbilitySystemComponent : public UGameplayTasksComponent, public IGameplayTagAssetInterface, public IAbilitySystemReplicationProxyInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAbilityConfirmOrCancel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityAbilityKey, int32, InputID);
    
    UPROPERTY(EditAnywhere)
    TArray<FAttributeDefaults> DefaultStartingData;
    
    UPROPERTY(Export, Replicated)
    TArray<UAttributeSet*> SpawnedAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AffectedAnimInstanceTag;
    
    UPROPERTY()
    float OutgoingDuration;
    
    UPROPERTY()
    float IncomingDuration;
    
    UPROPERTY(ReplicatedUsing=OnRep_ClientDebugString)
    TArray<FString> ClientDebugStrings;
    
    UPROPERTY(ReplicatedUsing=OnRep_ServerDebugString)
    TArray<FString> ServerDebugStrings;
    
    UPROPERTY()
    bool UserAbilityActivationInhibited;
    
    UPROPERTY()
    bool ReplicationProxyEnabled;
    
    UPROPERTY()
    bool bSuppressGrantAbility;
    
    UPROPERTY()
    bool bSuppressGameplayCues;
    
    UPROPERTY()
    TArray<AGameplayAbilityTargetActor*> SpawnedTargetActors;
    
    UPROPERTY(ReplicatedUsing=OnRep_OwningActor)
    AActor* OwnerActor;
    
    UPROPERTY(ReplicatedUsing=OnRep_OwningActor)
    AActor* AvatarActor;
    
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ActivateAbilities)
    FGameplayAbilitySpecContainer ActivatableAbilities;
    
    UPROPERTY()
    TArray<UGameplayAbility*> AllReplicatedInstancedAbilities;
    
    UPROPERTY(ReplicatedUsing=OnRep_ReplicatedAnimMontage)
    FGameplayAbilityRepAnimMontage RepAnimMontageInfo;
    
    UPROPERTY()
    bool bCachedIsNetSimulated;
    
    UPROPERTY()
    bool bPendingMontageRep;
    
    UPROPERTY()
    FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo;
    
    UPROPERTY(Replicated)
    FActiveGameplayEffectsContainer ActiveGameplayEffects;
    
    UPROPERTY(Replicated)
    FActiveGameplayCueContainer ActiveGameplayCues;
    
    UPROPERTY(Replicated)
    FActiveGameplayCueContainer MinimalReplicationGameplayCues;
    
    UPROPERTY(Replicated, Transient)
    TArray<uint8> BlockedAbilityBindings;
    
    UPROPERTY(Replicated)
    FMinimalReplicationTagCountMap MinimalReplicationTags;
    
public:
    UPROPERTY(Replicated)
    FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap;
    
    UAbilitySystemComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool TryActivateAbilityByClass(TSubclassOf<UGameplayAbility> InAbilityToActivate, bool bAllowRemoteActivation);
    
    UFUNCTION(BlueprintCallable)
    bool TryActivateAbilitiesByTag(const FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
    
    UFUNCTION(BlueprintCallable)
    void TargetConfirm();
    
    UFUNCTION(BlueprintCallable)
    void TargetCancel();
    
    UFUNCTION(BlueprintCallable)
    void SetUserAbilityActivationInhibited(bool NewInhibit);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32 NewLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32 NewLevel);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, const FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPrintDebug_RequestWithStrings(const TArray<FString>& Strings);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPrintDebug_Request();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCurrentMontageSetPlayRate(UAnimMontage* ClientAnimMontage, float InPlayRate);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCurrentMontageSetNextSectionName(UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCurrentMontageJumpToSectionName(UAnimMontage* ClientAnimMontage, FName SectionName);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveActiveGameplayEffectBySourceEffect(TSubclassOf<UGameplayEffect> GameplayEffect, UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32 StacksToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32 StacksToRemove);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveActiveEffectsWithTags(FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags);
    
    UFUNCTION()
    void OnRep_ServerDebugString();
    
protected:
    UFUNCTION()
    void OnRep_ReplicatedAnimMontage();
    
public:
    UFUNCTION()
    void OnRep_OwningActor();
    
    UFUNCTION()
    void OnRep_ClientDebugString();
    
protected:
    UFUNCTION()
    void OnRep_ActivateAbilities();
    
public:
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCuesExecuted(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueExecuted_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueExecuted(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const FGameplayEffectSpecForRPC& Spec, FPredictionKey PredictionKey);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAdded_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAdded(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintPure)
    FGameplayEffectSpecHandle MakeOutgoingSpec(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level, FGameplayEffectContextHandle Context) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayEffectContextHandle MakeEffectContext() const;
    
    UFUNCTION(BlueprintCallable)
    void K2_InitStats(TSubclassOf<UAttributeSet> Attributes, const UDataTable* DataTable);
    
    UFUNCTION(BlueprintPure)
    bool IsGameplayCueActive(const FGameplayTag GameplayCueTag) const;
    
    UFUNCTION(BlueprintPure)
    bool GetUserAbilityActivationInhibited() const;
    
    UFUNCTION(BlueprintPure)
    float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetGameplayEffectCount(TSubclassOf<UGameplayEffect> SourceGameplayEffect, UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(FGameplayTagContainer Tags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FActiveGameplayEffectHandle> GetActiveEffects(const FGameplayEffectQuery& Query) const;
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey);
    
    UFUNCTION(Client, Reliable)
    void ClientPrintDebug_Response(const TArray<FString>& Strings, int32 GameFlags);
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo);
    
    UFUNCTION(Client, Reliable)
    void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);
    
    UFUNCTION(Client, Reliable)
    void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData);
    
    UFUNCTION(Client, Reliable)
    void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey);
    
    UFUNCTION(Client, Reliable)
    void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16 PredictionKey);
    
public:
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(TSubclassOf<UGameplayEffect> GameplayEffectClass, UAbilitySystemComponent* Target, float Level, FGameplayEffectContextHandle Context);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(const FGameplayEffectSpecHandle& SpecHandle, UAbilitySystemComponent* Target);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(const FGameplayEffectSpecHandle& SpecHandle);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};


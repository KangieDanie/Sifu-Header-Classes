#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EGameplayAbilityReplicationPolicy.h"
#include "EGameplayAbilityNetExecutionPolicy.h"
#include "GameplayAbilityActivationInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EGameplayAbilityInstancingPolicy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTaskOwnerInterface -FallbackName=GameplayTaskOwnerInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayEventData.h"
#include "EGameplayAbilityNetSecurityPolicy.h"
#include "GameplayEffectContextHandle.h"
#include "AbilityTriggerData.h"
#include "GameplayCueParameters.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayAbilityTargetingLocationInfo.h"
#include "GameplayEffectSpecHandle.h"
#include "GameplayAbilityActorInfo.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "GameplayAbility.generated.h"

class UAnimMontage;
class UGameplayEffect;
class UGameplayTask;
class USkeletalMeshComponent;
class UAbilitySystemComponent;
class AActor;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UGameplayAbility : public UObject, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer AbilityTags;
    
    UPROPERTY(EditDefaultsOnly)
    bool bReplicateInputDirectly;
    
    UPROPERTY()
    bool RemoteInstanceEnded;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EGameplayAbilityReplicationPolicy::Type> ReplicationPolicy;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EGameplayAbilityInstancingPolicy::Type> InstancingPolicy;
    
    UPROPERTY(EditDefaultsOnly)
    bool bServerRespectsRemoteAbilityCancellation;
    
    UPROPERTY(EditDefaultsOnly)
    bool bRetriggerInstancedAbility;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAbilityActivationInfo CurrentActivationInfo;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayEventData CurrentEventData;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EGameplayAbilityNetExecutionPolicy::Type> NetExecutionPolicy;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EGameplayAbilityNetSecurityPolicy::Type> NetSecurityPolicy;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> CostGameplayEffectClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAbilityTriggerData> AbilityTriggers;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> CooldownGameplayEffectClass;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer CancelAbilitiesWithTag;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer BlockAbilitiesWithTag;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer ActivationOwnedTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer ActivationRequiredTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer ActivationBlockedTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer SourceRequiredTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer SourceBlockedTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer TargetRequiredTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer TargetBlockedTags;
    
    UPROPERTY()
    TArray<UGameplayTask*> ActiveTasks;
    
    UPROPERTY()
    UAnimMontage* CurrentMontage;
    
    UPROPERTY()
    bool bIsActive;
    
    UPROPERTY()
    bool bIsCancelable;
    
    UPROPERTY()
    bool bIsBlockingOtherAbilities;
    
    UPROPERTY(BlueprintReadOnly)
    bool bMarkPendingKillOnAbilityEnd;
    
public:
    UGameplayAbility();
    UFUNCTION(BlueprintCallable)
    void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBeCanceled(bool bCanBeCanceled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveGrantedByEffect();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MontageStop(float OverrideBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName);
    
    UFUNCTION(BlueprintCallable)
    void MontageJumpToSection(FName SectionName);
    
    UFUNCTION(BlueprintPure)
    FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName);
    
    UFUNCTION(BlueprintPure)
    FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
    
public:
    UFUNCTION(BlueprintPure)
    FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) const;
    
    UFUNCTION(BlueprintCallable)
    void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnEndAbility(bool bWasCancelled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool K2_HasAuthority() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable)
    void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context);
    
    UFUNCTION(BlueprintCallable)
    void K2_EndAbility();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_CommitExecute();
    
    UFUNCTION(BlueprintCallable)
    bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
    
    UFUNCTION(BlueprintCallable)
    bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
    
    UFUNCTION(BlueprintCallable)
    bool K2_CommitAbility();
    
    UFUNCTION(BlueprintCallable)
    bool K2_CheckAbilityCost();
    
    UFUNCTION(BlueprintCallable)
    bool K2_CheckAbilityCooldown();
    
    UFUNCTION(BlueprintCallable)
    void K2_CancelAbility();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer& RelevantTags) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const FGameplayEffectSpecHandle EffectSpecHandle);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_ActivateAbilityFromEvent(const FGameplayEventData& EventData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_ActivateAbility();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InvalidateClientPredictionKey() const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetOwningComponentFromActorInfo() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwningActorFromActorInfo() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayEffectContextHandle GetGrantedByEffectContext() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetCurrentSourceObject() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetCurrentMontage() const;
    
    UFUNCTION(BlueprintPure)
    float GetCooldownTimeRemaining() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAvatarActorFromActorInfo() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayAbilityActorInfo GetActorInfo() const;
    
    UFUNCTION(BlueprintPure)
    UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAbilityLevel() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndTaskByInstanceName(FName InstanceName);
    
    UFUNCTION(BlueprintCallable)
    void EndAbilityState(FName OptionalStateNameToEnd);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask);
    
    UFUNCTION(BlueprintCallable)
    void CancelTaskByInstanceName(FName InstanceName);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32 StacksToRemove);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32 StacksToRemove);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32 StacksToRemove);
    
    UFUNCTION(BlueprintCallable)
    TArray<FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(TSubclassOf<UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
    
    
    // Fix for true pure virtual functions not being implemented
};


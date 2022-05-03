#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayEffectCue.h"
#include "GameplayModifierInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConditionalGameplayEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagAssetInterface -FallbackName=GameplayTagAssetInterface
#include "EGameplayEffectPeriodInhibitionRemovedPolicy.h"
#include "GameplayEffectExecutionDefinition.h"
#include "ScalableFloat.h"
#include "EGameplayEffectDurationType.h"
#include "GameplayEffectModifierMagnitude.h"
#include "InheritedTagContainer.h"
#include "GameplayTagRequirements.h"
#include "GameplayEffectQuery.h"
#include "EGameplayEffectStackingType.h"
#include "EGameplayEffectStackingExpirationPolicy.h"
#include "EGameplayEffectStackingDurationPolicy.h"
#include "EGameplayEffectStackingPeriodPolicy.h"
#include "GameplayAbilitySpecDef.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayEffect.generated.h"

class UGameplayEffectCustomApplicationRequirement;
class UGameplayEffect;
class UGameplayEffectUIData;

UCLASS(BlueprintType)
class GAMEPLAYABILITIES_API UGameplayEffect : public UObject, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EGameplayEffectDurationType DurationPolicy;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayEffectModifierMagnitude DurationMagnitude;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FScalableFloat Period;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bExecutePeriodicEffectOnApplication;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FGameplayModifierInfo> Modifiers;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FGameplayEffectExecutionDefinition> Executions;
    
    UPROPERTY(EditDefaultsOnly)
    FScalableFloat ChanceToApplyToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements;
    
    UPROPERTY()
    TArray<TSubclassOf<UGameplayEffect>> TargetEffectClasses;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FConditionalGameplayEffect> ConditionalGameplayEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UGameplayEffect>> OverflowEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDenyOverflowApplication;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bClearStackOnOverflow;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UGameplayEffect>> PrematureExpirationEffectClasses;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UGameplayEffect>> RoutineExpirationEffectClasses;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRequireModifierSuccessToTriggerCues;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSuppressStackingCues;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FGameplayEffectCue> GameplayCues;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UGameplayEffectUIData* UIData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FInheritedTagContainer InheritableGameplayEffectTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FInheritedTagContainer InheritableOwnedTagsContainer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagRequirements OngoingTagRequirements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagRequirements OngoingTagHardRequirements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagRequirements ApplicationTagRequirements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagRequirements RemovalTagRequirements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FInheritedTagContainer RemoveGameplayEffectsWithTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagRequirements GrantedApplicationImmunityTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayEffectQuery GrantedApplicationImmunityQuery;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayEffectQuery RemoveGameplayEffectQuery;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EGameplayEffectStackingType StackingType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 StackLimitCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EGameplayEffectStackingExpirationPolicy StackExpirationPolicy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FGameplayAbilitySpecDef> GrantedAbilities;
    
    UGameplayEffect();
    
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


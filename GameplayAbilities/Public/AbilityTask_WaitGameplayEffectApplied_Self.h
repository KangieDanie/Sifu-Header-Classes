#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_WaitGameplayEffectApplied.h"
#include "GameplayTagRequirements.h"
#include "GameplayEffectAppliedSelfDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "GameplayTargetDataFilterHandle.h"
#include "AbilityTask_WaitGameplayEffectApplied_Self.generated.h"

class AActor;
class UAbilityTask_WaitGameplayEffectApplied_Self;
class UGameplayAbility;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGameplayEffectAppliedSelfDelegate OnApplied;
    
    UAbilityTask_WaitGameplayEffectApplied_Self();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
    
};


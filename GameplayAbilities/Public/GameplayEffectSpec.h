#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectContextHandle.h"
#include "GameplayEffectModifiedAttribute.h"
#include "GameplayEffectAttributeCaptureSpecContainer.h"
#include "TagContainerAggregator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ModifierSpec.h"
#include "GameplayAbilitySpecDef.h"
#include "GameplayEffectSpec.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectSpec {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGameplayEffect* Def;
    
    UPROPERTY()
    TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes;
    
    UPROPERTY(NotReplicated)
    FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;
    
    UPROPERTY()
    float Duration;
    
    UPROPERTY()
    float Period;
    
    UPROPERTY()
    float ChanceToApplyToTarget;
    
    UPROPERTY(NotReplicated)
    FTagContainerAggregator CapturedSourceTags;
    
    UPROPERTY(NotReplicated)
    FTagContainerAggregator CapturedTargetTags;
    
    UPROPERTY()
    FGameplayTagContainer DynamicGrantedTags;
    
    UPROPERTY()
    FGameplayTagContainer DynamicAssetTags;
    
    UPROPERTY()
    TArray<FModifierSpec> Modifiers;
    
    UPROPERTY()
    int32 StackCount;
    
    UPROPERTY(NotReplicated)
    uint8 bCompletedSourceAttributeCapture: 1;
    
    UPROPERTY(NotReplicated)
    uint8 bCompletedTargetAttributeCapture: 1;
    
    UPROPERTY(NotReplicated)
    uint8 bDurationLocked: 1;
    
    UPROPERTY()
    TArray<FGameplayAbilitySpecDef> GrantedAbilitySpecs;
    
private:
    UPROPERTY()
    FGameplayEffectContextHandle EffectContext;
    
    UPROPERTY()
    float Level;
    
public:
    FGameplayEffectSpec();
};


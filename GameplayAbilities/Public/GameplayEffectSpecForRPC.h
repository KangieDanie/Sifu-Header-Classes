#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectContextHandle.h"
#include "GameplayEffectModifiedAttribute.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayEffectSpecForRPC.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectSpecForRPC {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGameplayEffect* Def;
    
    UPROPERTY()
    TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes;
    
    UPROPERTY()
    FGameplayEffectContextHandle EffectContext;
    
    UPROPERTY()
    FGameplayTagContainer AggregatedSourceTags;
    
    UPROPERTY()
    FGameplayTagContainer AggregatedTargetTags;
    
    UPROPERTY()
    float Level;
    
    UPROPERTY()
    float AbilityLevel;
    
    FGameplayEffectSpecForRPC();
};


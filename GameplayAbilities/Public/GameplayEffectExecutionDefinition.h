#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayEffectExecutionScopedModifierInfo.h"
#include "ConditionalGameplayEffect.h"
#include "GameplayEffectExecutionDefinition.generated.h"

class UGameplayEffectExecutionCalculation;
class UGameplayEffect;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectExecutionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGameplayEffectExecutionCalculation> CalculationClass;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer PassedInTags;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;
    
    UPROPERTY()
    TArray<TSubclassOf<UGameplayEffect>> ConditionalGameplayEffectClasses;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FConditionalGameplayEffect> ConditionalGameplayEffects;
    
    FGameplayEffectExecutionDefinition();
};


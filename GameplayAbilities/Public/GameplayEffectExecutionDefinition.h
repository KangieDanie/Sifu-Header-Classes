#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ConditionalGameplayEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayEffectExecutionScopedModifierInfo.h"
#include "GameplayEffectExecutionDefinition.generated.h"

class UGameplayEffect;
class UGameplayEffectExecutionCalculation;

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


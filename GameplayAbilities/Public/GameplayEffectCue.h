#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayEffectCue.generated.h"

USTRUCT(BlueprintType)
struct FGameplayEffectCue {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayAttribute MagnitudeAttribute;
    
    UPROPERTY(EditDefaultsOnly)
    float MinLevel;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxLevel;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer GameplayCueTags;
    
    GAMEPLAYABILITIES_API FGameplayEffectCue();
};


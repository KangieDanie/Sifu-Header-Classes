#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "ActiveGameplayEffect.h"
#include "ActiveGameplayEffectsContainer.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FActiveGameplayEffectsContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FActiveGameplayEffect> GameplayEffects_Internal;
    
    UPROPERTY()
    TArray<UGameplayEffect*> ApplicationImmunityQueryEffects;
    
public:
    FActiveGameplayEffectsContainer();
};


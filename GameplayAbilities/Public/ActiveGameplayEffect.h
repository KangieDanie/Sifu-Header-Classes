#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "GameplayEffectSpec.h"
#include "PredictionKey.h"
#include "ActiveGameplayEffect.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FActiveGameplayEffect : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayEffectSpec Spec;
    
    UPROPERTY()
    FPredictionKey PredictionKey;
    
    UPROPERTY()
    float StartServerWorldTime;
    
    UPROPERTY(NotReplicated)
    float CachedStartServerWorldTime;
    
    UPROPERTY(NotReplicated)
    float StartWorldTime;
    
    UPROPERTY(NotReplicated)
    bool bIsInhibited;
    
    FActiveGameplayEffect();
};


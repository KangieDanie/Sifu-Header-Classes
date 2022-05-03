#pragma once
#include "CoreMinimal.h"
#include "GameplayCueParameters.h"
#include "PredictionKey.h"
#include "GameplayEffectSpecForRPC.h"
#include "EGameplayCuePayloadType.h"
#include "GameplayCuePendingExecute.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FGameplayCuePendingExecute {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPredictionKey PredictionKey;
    
    UPROPERTY()
    EGameplayCuePayloadType PayloadType;
    
    UPROPERTY(Export)
    UAbilitySystemComponent* OwningComponent;
    
    UPROPERTY()
    FGameplayEffectSpecForRPC FromSpec;
    
    UPROPERTY()
    FGameplayCueParameters CueParameters;
    
    GAMEPLAYABILITIES_API FGameplayCuePendingExecute();
};


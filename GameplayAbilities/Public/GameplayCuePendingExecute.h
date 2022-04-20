#pragma once
#include "CoreMinimal.h"
#include "PredictionKey.h"
#include "EGameplayCuePayloadType.h"
#include "GameplayEffectSpecForRPC.h"
#include "GameplayCueParameters.h"
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


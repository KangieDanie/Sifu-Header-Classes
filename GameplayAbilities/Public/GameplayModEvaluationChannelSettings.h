#pragma once
#include "CoreMinimal.h"
#include "EGameplayModEvaluationChannel.h"
#include "GameplayModEvaluationChannelSettings.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayModEvaluationChannelSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EGameplayModEvaluationChannel Channel;
    
public:
    FGameplayModEvaluationChannelSettings();
};


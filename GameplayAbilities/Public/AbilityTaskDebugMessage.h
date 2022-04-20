#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskDebugMessage.generated.h"

class UGameplayTask;

USTRUCT()
struct GAMEPLAYABILITIES_API FAbilityTaskDebugMessage {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGameplayTask* FromTask;
    
    UPROPERTY()
    FString Message;
    
    FAbilityTaskDebugMessage();
};


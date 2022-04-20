#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "AbilityEndedData.generated.h"

class UGameplayAbility;

USTRUCT()
struct FAbilityEndedData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGameplayAbility* AbilityThatEnded;
    
    UPROPERTY()
    FGameplayAbilitySpecHandle AbilitySpecHandle;
    
    UPROPERTY()
    bool bReplicateEndAbility;
    
    UPROPERTY()
    bool bWasCancelled;
    
    GAMEPLAYABILITIES_API FAbilityEndedData();
};


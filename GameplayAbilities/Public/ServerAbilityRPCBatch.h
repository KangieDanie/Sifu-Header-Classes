#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "PredictionKey.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "ServerAbilityRPCBatch.generated.h"

USTRUCT(BlueprintType)
struct FServerAbilityRPCBatch {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayAbilitySpecHandle AbilitySpecHandle;
    
    UPROPERTY()
    FPredictionKey PredictionKey;
    
    UPROPERTY()
    FGameplayAbilityTargetDataHandle TargetData;
    
    UPROPERTY()
    bool InputPressed;
    
    UPROPERTY()
    bool Ended;
    
    UPROPERTY(NotReplicated)
    bool Started;
    
    GAMEPLAYABILITIES_API FServerAbilityRPCBatch();
};


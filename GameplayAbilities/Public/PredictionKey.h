#pragma once
#include "CoreMinimal.h"
#include "PredictionKey.generated.h"

class UPackageMap;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FPredictionKey {
    GENERATED_BODY()
public:
    UPROPERTY(NotReplicated)
    UPackageMap* PredictiveConnection;
    
    UPROPERTY()
    int16 Current;
    
    UPROPERTY()
    int16 Base;
    
    UPROPERTY(NotReplicated)
    bool bIsStale;
    
    UPROPERTY()
    bool bIsServerInitiated;
    
    FPredictionKey();
};


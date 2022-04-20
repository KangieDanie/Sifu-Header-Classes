#pragma once
#include "CoreMinimal.h"
#include "CRSimContainer.generated.h"

USTRUCT()
struct FCRSimContainer {
    GENERATED_BODY()
public:
    UPROPERTY()
    float TimeStep;
    
    UPROPERTY()
    float AccumulatedTime;
    
    UPROPERTY()
    float TimeLeftForStep;
    
    CONTROLRIG_API FCRSimContainer();
};


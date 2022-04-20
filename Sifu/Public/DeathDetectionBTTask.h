#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "DeathDetectionBTTask.generated.h"

UCLASS()
class SIFU_API UDeathDetectionBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UDeathDetectionBTTask();
};


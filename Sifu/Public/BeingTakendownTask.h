#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BeingTakendownTask.generated.h"

UCLASS()
class SIFU_API UBeingTakendownTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBeingTakendownTask();
};


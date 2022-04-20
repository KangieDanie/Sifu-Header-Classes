#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCBTTaskNode -FallbackName=SCBTTaskNode
#include "PlayOrderTask.generated.h"

UCLASS(Abstract)
class SIFU_API UPlayOrderTask : public USCBTTaskNode {
    GENERATED_BODY()
public:
    UPlayOrderTask();
};


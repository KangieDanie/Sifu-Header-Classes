#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "NotifyAttackFinishedBTTask.generated.h"

UCLASS()
class SIFU_API UNotifyAttackFinishedBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UNotifyAttackFinishedBTTask();
};


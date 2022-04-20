#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BaseActorConditionInstance.h"
#include "WaitForActorConditionTask.generated.h"

UCLASS()
class SIFU_API UWaitForActorConditionTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMaxWaitDuration;
    
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_condition;
    
    UWaitForActorConditionTask();
};


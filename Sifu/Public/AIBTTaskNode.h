#pragma once
#include "CoreMinimal.h"
#include "BTTaskNodeRelevancyCondition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCBTTaskNode -FallbackName=SCBTTaskNode
#include "InputAction.h"
#include "AIBTTaskNode.generated.h"

UCLASS()
class SIFU_API UAIBTTaskNode : public USCBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FBTTaskNodeRelevancyCondition> m_RelevancyConditions;
    
    UPROPERTY(EditAnywhere)
    InputAction m_eCancelTaskOnAvailableInput;
    
    UPROPERTY(EditAnywhere)
    bool m_bCancelWaitedOrdersOnFinish;
    
public:
    UAIBTTaskNode();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "BTTask_DynamicCameraNode.generated.h"

UCLASS()
class SIFU_API UBTTask_DynamicCameraNode : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_CameraDataBlackboardKeySelector;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_ActorRefBlackboardKeySelector;
    
    UBTTask_DynamicCameraNode();
};


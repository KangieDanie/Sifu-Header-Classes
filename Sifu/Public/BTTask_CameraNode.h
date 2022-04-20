#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BTTask_CameraNode.generated.h"

class UAbstractCameraData;

UCLASS()
class SIFU_API UBTTask_CameraNode : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAbstractCameraData* m_CameraData;
    
    UBTTask_CameraNode();
};


#pragma once
#include "CoreMinimal.h"
#include "CameraTransitionInfoPairStruct.generated.h"

class UCameraTransitionInfo;
class UAbstractCameraData;

USTRUCT(BlueprintType)
struct SIFU_API FCameraTransitionInfoPairStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAbstractCameraData* m_CameraData;
    
    UPROPERTY(EditAnywhere)
    UCameraTransitionInfo* m_CameraTransitionInfo;
    
    FCameraTransitionInfoPairStruct();
};


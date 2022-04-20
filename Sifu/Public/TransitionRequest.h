#pragma once
#include "CoreMinimal.h"
#include "ETransitionRotation.h"
#include "ESpeedState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCCardinalPoints -FallbackName=ESCCardinalPoints
#include "TransitionRequest.generated.h"

USTRUCT(BlueprintType)
struct FTransitionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESpeedState m_eInSpeedState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESCCardinalPoints m_eInCardinalPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESpeedState m_eOutSpeedState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESCCardinalPoints m_eOutCardinalPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETransitionRotation m_eVelocityRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fAbsVelocityAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsRotationLeft;
    
    SIFU_API FTransitionRequest();
};


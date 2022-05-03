#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "ESpeedState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCCardinalPoints -FallbackName=ESCCardinalPoints
#include "ETransitionRotationDirection.h"
#include "ETransitionRotation.h"
#include "EMoveTransitionType.h"
#include "DetailedMoveTransition.generated.h"

USTRUCT(BlueprintType)
struct FDetailedMoveTransition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESpeedState m_eInSpeedState;
    
    UPROPERTY(EditAnywhere)
    bool m_bAllowAllInCardinal;
    
    UPROPERTY(EditAnywhere)
    ESCCardinalPoints m_eInCardinalPoint;
    
    UPROPERTY(EditAnywhere)
    ESpeedState m_eOutSpeedState;
    
    UPROPERTY(EditAnywhere)
    ESCCardinalPoints m_eOutCardinalPoint;
    
    UPROPERTY(EditAnywhere)
    bool m_bFilterByVelocityRotation;
    
    UPROPERTY(EditAnywhere)
    ETransitionRotation m_eVelocityRotation;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideVelocityRotationRange;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_fVelocityRotationRangeOverride;
    
    UPROPERTY(EditAnywhere)
    ETransitionRotationDirection m_eVelocityRotationDirection;
    
    UPROPERTY(EditAnywhere)
    EMoveTransitionType m_eResultingTransition;
    
protected:
    UPROPERTY(VisibleAnywhere)
    FString m_Description;
    
public:
    SIFU_API FDetailedMoveTransition();
};


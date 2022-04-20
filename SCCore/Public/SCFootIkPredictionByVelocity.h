#pragma once
#include "CoreMinimal.h"
#include "SCFootIkService.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "SCFootIkPredictionByVelocity.generated.h"

UCLASS()
class SCCORE_API USCFootIkPredictionByVelocity : public USCFootIkService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatRange m_activationRange;
    
    UPROPERTY(EditAnywhere)
    float m_fMinRequiredVelocity;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseLastGroundNormal;
    
public:
    USCFootIkPredictionByVelocity();
};


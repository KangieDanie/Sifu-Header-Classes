#pragma once
#include "CoreMinimal.h"
#include "ETargetingPrio.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BaseTargetEvaluation.generated.h"

class UCurveFloat;

UCLASS(Abstract)
class SIFU_API UBaseTargetEvaluation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_Curve;
    
protected:
    UPROPERTY(EditAnywhere)
    ETargetingPrio m_eTargettingType;
    
public:
    UBaseTargetEvaluation();
};


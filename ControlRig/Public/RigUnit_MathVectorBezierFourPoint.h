#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorBase.h"
#include "CRFourPointBezier.h"
#include "RigUnit_MathVectorBezierFourPoint.generated.h"

USTRUCT()
struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCRFourPointBezier Bezier;
    
    UPROPERTY()
    float T;
    
    UPROPERTY()
    FVector Result;
    
    UPROPERTY()
    FVector Tangent;
    
    CONTROLRIG_API FRigUnit_MathVectorBezierFourPoint();
};


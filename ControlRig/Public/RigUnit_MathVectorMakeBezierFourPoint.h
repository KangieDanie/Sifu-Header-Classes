#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBase.h"
#include "CRFourPointBezier.h"
#include "RigUnit_MathVectorMakeBezierFourPoint.generated.h"

USTRUCT()
struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCRFourPointBezier Bezier;
    
    CONTROLRIG_API FRigUnit_MathVectorMakeBezierFourPoint();
};


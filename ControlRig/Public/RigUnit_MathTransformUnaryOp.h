#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathTransformBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_MathTransformUnaryOp.generated.h"

USTRUCT()
struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Value;
    
    UPROPERTY()
    FTransform Result;
    
    CONTROLRIG_API FRigUnit_MathTransformUnaryOp();
};


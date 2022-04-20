#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathTransformBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_MathTransformBinaryOp.generated.h"

USTRUCT()
struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform A;
    
    UPROPERTY()
    FTransform B;
    
    UPROPERTY()
    FTransform Result;
    
    CONTROLRIG_API FRigUnit_MathTransformBinaryOp();
};


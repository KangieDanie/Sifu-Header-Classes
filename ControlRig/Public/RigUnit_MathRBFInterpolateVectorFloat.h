#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathRBFInterpolateVectorBase.h"
#include "MathRBFInterpolateVectorFloat_Target.h"
#include "RigUnit_MathRBFInterpolateVectorFloat.generated.h"

USTRUCT()
struct FRigUnit_MathRBFInterpolateVectorFloat : public FRigUnit_MathRBFInterpolateVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMathRBFInterpolateVectorFloat_Target> Targets;
    
    UPROPERTY()
    float Output;
    
    CONTROLRIG_API FRigUnit_MathRBFInterpolateVectorFloat();
};


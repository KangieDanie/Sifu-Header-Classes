#pragma once
#include "CoreMinimal.h"
#include "MathRBFInterpolateQuatFloat_Target.h"
#include "RigUnit_MathRBFInterpolateQuatBase.h"
#include "RigUnit_MathRBFInterpolateQuatFloat.generated.h"

USTRUCT()
struct FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMathRBFInterpolateQuatFloat_Target> Targets;
    
    UPROPERTY()
    float Output;
    
    CONTROLRIG_API FRigUnit_MathRBFInterpolateQuatFloat();
};


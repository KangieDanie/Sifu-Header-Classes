#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathRBFInterpolateVectorBase.h"
#include "MathRBFInterpolateVectorXform_Target.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_MathRBFInterpolateVectorXform.generated.h"

USTRUCT()
struct FRigUnit_MathRBFInterpolateVectorXform : public FRigUnit_MathRBFInterpolateVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMathRBFInterpolateVectorXform_Target> Targets;
    
    UPROPERTY()
    FTransform Output;
    
    CONTROLRIG_API FRigUnit_MathRBFInterpolateVectorXform();
};


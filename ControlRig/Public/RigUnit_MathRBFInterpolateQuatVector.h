#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathRBFInterpolateQuatBase.h"
#include "MathRBFInterpolateQuatVector_Target.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathRBFInterpolateQuatVector.generated.h"

USTRUCT()
struct FRigUnit_MathRBFInterpolateQuatVector : public FRigUnit_MathRBFInterpolateQuatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMathRBFInterpolateQuatVector_Target> Targets;
    
    UPROPERTY()
    FVector Output;
    
    CONTROLRIG_API FRigUnit_MathRBFInterpolateQuatVector();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathRBFInterpolateVectorBase.h"
#include "MathRBFInterpolateVectorVector_Target.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathRBFInterpolateVectorVector.generated.h"

USTRUCT()
struct FRigUnit_MathRBFInterpolateVectorVector : public FRigUnit_MathRBFInterpolateVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMathRBFInterpolateVectorVector_Target> Targets;
    
    UPROPERTY()
    FVector Output;
    
    CONTROLRIG_API FRigUnit_MathRBFInterpolateVectorVector();
};


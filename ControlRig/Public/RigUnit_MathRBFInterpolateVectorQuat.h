#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathRBFInterpolateVectorBase.h"
#include "MathRBFInterpolateVectorQuat_Target.h"
#include "RigUnit_MathRBFInterpolateVectorQuat.generated.h"

USTRUCT()
struct FRigUnit_MathRBFInterpolateVectorQuat : public FRigUnit_MathRBFInterpolateVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMathRBFInterpolateVectorQuat_Target> Targets;
    
    UPROPERTY()
    FQuat Output;
    
    CONTROLRIG_API FRigUnit_MathRBFInterpolateVectorQuat();
};


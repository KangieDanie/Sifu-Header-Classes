#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathRBFInterpolateQuatBase.h"
#include "MathRBFInterpolateQuatQuat_Target.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathRBFInterpolateQuatQuat.generated.h"

USTRUCT()
struct FRigUnit_MathRBFInterpolateQuatQuat : public FRigUnit_MathRBFInterpolateQuatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMathRBFInterpolateQuatQuat_Target> Targets;
    
    UPROPERTY()
    FQuat Output;
    
    CONTROLRIG_API FRigUnit_MathRBFInterpolateQuatQuat();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathRBFInterpolateQuatBase.h"
#include "MathRBFInterpolateQuatXform_Target.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_MathRBFInterpolateQuatXform.generated.h"

USTRUCT()
struct FRigUnit_MathRBFInterpolateQuatXform : public FRigUnit_MathRBFInterpolateQuatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMathRBFInterpolateQuatXform_Target> Targets;
    
    UPROPERTY()
    FTransform Output;
    
    CONTROLRIG_API FRigUnit_MathRBFInterpolateQuatXform();
};


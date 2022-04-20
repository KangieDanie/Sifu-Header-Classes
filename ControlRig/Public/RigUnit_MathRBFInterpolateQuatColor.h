#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigUnit_MathRBFInterpolateQuatBase.h"
#include "MathRBFInterpolateQuatColor_Target.h"
#include "RigUnit_MathRBFInterpolateQuatColor.generated.h"

USTRUCT()
struct FRigUnit_MathRBFInterpolateQuatColor : public FRigUnit_MathRBFInterpolateQuatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMathRBFInterpolateQuatColor_Target> Targets;
    
    UPROPERTY()
    FLinearColor Output;
    
    CONTROLRIG_API FRigUnit_MathRBFInterpolateQuatColor();
};


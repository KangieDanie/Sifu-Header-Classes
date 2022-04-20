#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathRBFInterpolateVectorBase.h"
#include "MathRBFInterpolateVectorColor_Target.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigUnit_MathRBFInterpolateVectorColor.generated.h"

USTRUCT()
struct FRigUnit_MathRBFInterpolateVectorColor : public FRigUnit_MathRBFInterpolateVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMathRBFInterpolateVectorColor_Target> Targets;
    
    UPROPERTY()
    FLinearColor Output;
    
    CONTROLRIG_API FRigUnit_MathRBFInterpolateVectorColor();
};


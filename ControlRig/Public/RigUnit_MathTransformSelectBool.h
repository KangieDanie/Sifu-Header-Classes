#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathTransformBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_MathTransformSelectBool.generated.h"

USTRUCT()
struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Condition;
    
    UPROPERTY()
    FTransform IfTrue;
    
    UPROPERTY()
    FTransform IfFalse;
    
    UPROPERTY()
    FTransform Result;
    
    CONTROLRIG_API FRigUnit_MathTransformSelectBool();
};


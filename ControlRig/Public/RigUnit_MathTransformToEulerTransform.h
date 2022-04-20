#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathTransformBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EulerTransform -FallbackName=EulerTransform
#include "RigUnit_MathTransformToEulerTransform.generated.h"

USTRUCT()
struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Value;
    
    UPROPERTY()
    FEulerTransform Result;
    
    CONTROLRIG_API FRigUnit_MathTransformToEulerTransform();
};


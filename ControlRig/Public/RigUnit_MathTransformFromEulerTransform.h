#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathTransformBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EulerTransform -FallbackName=EulerTransform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_MathTransformFromEulerTransform.generated.h"

USTRUCT()
struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FEulerTransform EulerTransform;
    
    UPROPERTY()
    FTransform Result;
    
    CONTROLRIG_API FRigUnit_MathTransformFromEulerTransform();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathTransformBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigRotationOrder.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EulerTransform -FallbackName=EulerTransform
#include "RigUnit_MathTransformFromSRT.generated.h"

USTRUCT()
struct FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FVector Rotation;
    
    UPROPERTY()
    EControlRigRotationOrder RotationOrder;
    
    UPROPERTY()
    FVector Scale;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FEulerTransform EulerTransform;
    
    CONTROLRIG_API FRigUnit_MathTransformFromSRT();
};


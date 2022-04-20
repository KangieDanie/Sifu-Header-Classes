#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathTransformBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathTransformRotateVector.generated.h"

USTRUCT()
struct FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FVector Direction;
    
    UPROPERTY()
    FVector Result;
    
    CONTROLRIG_API FRigUnit_MathTransformRotateVector();
};


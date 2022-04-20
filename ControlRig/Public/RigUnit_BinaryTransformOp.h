#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_BinaryTransformOp.generated.h"

USTRUCT()
struct FRigUnit_BinaryTransformOp : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Argument0;
    
    UPROPERTY()
    FTransform Argument1;
    
    UPROPERTY()
    FTransform Result;
    
    CONTROLRIG_API FRigUnit_BinaryTransformOp();
};


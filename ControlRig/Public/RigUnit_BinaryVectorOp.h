#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
#include "RigUnit_BinaryVectorOp.generated.h"

USTRUCT()
struct FRigUnit_BinaryVectorOp : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Argument0;
    
    UPROPERTY()
    FVector Argument1;
    
    UPROPERTY()
    FVector Result;
    
    CONTROLRIG_API FRigUnit_BinaryVectorOp();
};


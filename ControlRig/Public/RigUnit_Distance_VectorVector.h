#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
#include "RigUnit_Distance_VectorVector.generated.h"

USTRUCT()
struct FRigUnit_Distance_VectorVector : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Argument0;
    
    UPROPERTY()
    FVector Argument1;
    
    UPROPERTY()
    float Result;
    
    CONTROLRIG_API FRigUnit_Distance_VectorVector();
};


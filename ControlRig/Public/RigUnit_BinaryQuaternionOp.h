#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_BinaryQuaternionOp.generated.h"

USTRUCT()
struct FRigUnit_BinaryQuaternionOp : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Argument0;
    
    UPROPERTY()
    FQuat Argument1;
    
    UPROPERTY()
    FQuat Result;
    
    CONTROLRIG_API FRigUnit_BinaryQuaternionOp();
};


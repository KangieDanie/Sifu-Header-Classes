#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_UnaryQuaternionOp.generated.h"

USTRUCT()
struct FRigUnit_UnaryQuaternionOp : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Argument;
    
    UPROPERTY()
    FQuat Result;
    
    CONTROLRIG_API FRigUnit_UnaryQuaternionOp();
};


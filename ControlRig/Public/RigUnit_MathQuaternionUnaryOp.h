#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathQuaternionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathQuaternionUnaryOp.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Value;
    
    UPROPERTY()
    FQuat Result;
    
    CONTROLRIG_API FRigUnit_MathQuaternionUnaryOp();
};


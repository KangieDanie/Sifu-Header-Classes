#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathQuaternionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathQuaternionSelectBool.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Condition;
    
    UPROPERTY()
    FQuat IfTrue;
    
    UPROPERTY()
    FQuat IfFalse;
    
    UPROPERTY()
    FQuat Result;
    
    CONTROLRIG_API FRigUnit_MathQuaternionSelectBool();
};


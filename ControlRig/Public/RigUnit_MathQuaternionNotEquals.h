#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathQuaternionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathQuaternionNotEquals.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionNotEquals : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat A;
    
    UPROPERTY()
    FQuat B;
    
    UPROPERTY()
    bool Result;
    
    CONTROLRIG_API FRigUnit_MathQuaternionNotEquals();
};


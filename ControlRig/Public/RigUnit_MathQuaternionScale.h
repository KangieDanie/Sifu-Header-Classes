#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathQuaternionBase.h"
#include "RigUnit_MathQuaternionScale.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionScale : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Value;
    
    UPROPERTY()
    float Scale;
    
    CONTROLRIG_API FRigUnit_MathQuaternionScale();
};


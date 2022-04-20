#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathQuaternionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "EControlRigRotationOrder.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathQuaternionToEuler.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Value;
    
    UPROPERTY()
    EControlRigRotationOrder RotationOrder;
    
    UPROPERTY()
    FVector Result;
    
    CONTROLRIG_API FRigUnit_MathQuaternionToEuler();
};


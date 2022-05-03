#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathQuaternionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathQuaternionRotateVector.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Quaternion;
    
    UPROPERTY()
    FVector Vector;
    
    UPROPERTY()
    FVector Result;
    
    CONTROLRIG_API FRigUnit_MathQuaternionRotateVector();
};


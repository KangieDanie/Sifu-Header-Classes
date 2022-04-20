#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathQuaternionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathQuaternionFromAxisAndAngle.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Axis;
    
    UPROPERTY()
    float Angle;
    
    UPROPERTY()
    FQuat Result;
    
    CONTROLRIG_API FRigUnit_MathQuaternionFromAxisAndAngle();
};


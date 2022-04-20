#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathQuaternionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathQuaternionToAxisAndAngle.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Value;
    
    UPROPERTY()
    FVector Axis;
    
    UPROPERTY()
    float Angle;
    
    CONTROLRIG_API FRigUnit_MathQuaternionToAxisAndAngle();
};


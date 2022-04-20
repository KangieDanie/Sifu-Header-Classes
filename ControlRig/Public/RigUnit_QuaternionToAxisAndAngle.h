#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_QuaternionToAxisAndAngle.generated.h"

USTRUCT()
struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Argument;
    
    UPROPERTY()
    FVector Axis;
    
    UPROPERTY()
    float Angle;
    
    CONTROLRIG_API FRigUnit_QuaternionToAxisAndAngle();
};


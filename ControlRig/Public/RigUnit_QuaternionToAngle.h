#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_QuaternionToAngle.generated.h"

USTRUCT()
struct FRigUnit_QuaternionToAngle : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Axis;
    
    UPROPERTY()
    FQuat Argument;
    
    UPROPERTY()
    float Angle;
    
    CONTROLRIG_API FRigUnit_QuaternionToAngle();
};


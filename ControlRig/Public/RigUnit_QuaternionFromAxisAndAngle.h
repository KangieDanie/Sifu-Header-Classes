#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_QuaternionFromAxisAndAngle.generated.h"

USTRUCT()
struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Axis;
    
    UPROPERTY()
    float Angle;
    
    UPROPERTY()
    FQuat Result;
    
    CONTROLRIG_API FRigUnit_QuaternionFromAxisAndAngle();
};


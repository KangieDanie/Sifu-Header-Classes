#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_ConvertRotation.generated.h"

USTRUCT()
struct FRigUnit_ConvertRotation : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRotator Input;
    
    UPROPERTY()
    FQuat Result;
    
    CONTROLRIG_API FRigUnit_ConvertRotation();
};


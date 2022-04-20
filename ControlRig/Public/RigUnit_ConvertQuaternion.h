#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RigUnit_ConvertQuaternion.generated.h"

USTRUCT()
struct FRigUnit_ConvertQuaternion : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Input;
    
    UPROPERTY()
    FRotator Result;
    
    CONTROLRIG_API FRigUnit_ConvertQuaternion();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathQuaternionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathQuaternionFromRotator.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRotator Rotator;
    
    UPROPERTY()
    FQuat Result;
    
    CONTROLRIG_API FRigUnit_MathQuaternionFromRotator();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_DeltaFromPreviousQuat.generated.h"

USTRUCT()
struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Value;
    
    UPROPERTY()
    FQuat Delta;
    
    UPROPERTY()
    FQuat PreviousValue;
    
    UPROPERTY()
    FQuat Cache;
    
    CONTROLRIG_API FRigUnit_DeltaFromPreviousQuat();
};


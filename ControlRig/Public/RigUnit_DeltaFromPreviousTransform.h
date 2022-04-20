#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_DeltaFromPreviousTransform.generated.h"

USTRUCT()
struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Value;
    
    UPROPERTY()
    FTransform Delta;
    
    UPROPERTY()
    FTransform PreviousValue;
    
    UPROPERTY()
    FTransform Cache;
    
    CONTROLRIG_API FRigUnit_DeltaFromPreviousTransform();
};


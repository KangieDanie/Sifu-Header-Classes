#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_Timeline.generated.h"

USTRUCT()
struct FRigUnit_Timeline : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Speed;
    
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    float AccumulatedValue;
    
    CONTROLRIG_API FRigUnit_Timeline();
};


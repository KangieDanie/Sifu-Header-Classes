#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AnimBase.h"
#include "RigUnit_GetDeltaTime.generated.h"

USTRUCT()
struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Result;
    
    CONTROLRIG_API FRigUnit_GetDeltaTime();
};


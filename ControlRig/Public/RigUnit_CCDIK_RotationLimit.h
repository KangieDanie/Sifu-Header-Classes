#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CCDIK_RotationLimit.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_CCDIK_RotationLimit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Bone;
    
    UPROPERTY()
    float Limit;
    
    CONTROLRIG_API FRigUnit_CCDIK_RotationLimit();
};


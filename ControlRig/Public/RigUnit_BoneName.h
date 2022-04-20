#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_BoneName.generated.h"

USTRUCT()
struct FRigUnit_BoneName : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Bone;
    
    CONTROLRIG_API FRigUnit_BoneName();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_SpaceName.generated.h"

USTRUCT()
struct FRigUnit_SpaceName : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Space;
    
    CONTROLRIG_API FRigUnit_SpaceName();
};


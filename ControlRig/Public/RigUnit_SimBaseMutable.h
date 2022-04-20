#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_SimBaseMutable.generated.h"

USTRUCT()
struct FRigUnit_SimBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_SimBaseMutable();
};


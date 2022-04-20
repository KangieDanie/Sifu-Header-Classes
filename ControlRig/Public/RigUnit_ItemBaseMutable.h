#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_ItemBaseMutable.generated.h"

USTRUCT()
struct FRigUnit_ItemBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_ItemBaseMutable();
};


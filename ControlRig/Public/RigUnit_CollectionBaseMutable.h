#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_CollectionBaseMutable.generated.h"

USTRUCT()
struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_CollectionBaseMutable();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_CollectionBase.generated.h"

USTRUCT()
struct FRigUnit_CollectionBase : public FRigUnit {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_CollectionBase();
};


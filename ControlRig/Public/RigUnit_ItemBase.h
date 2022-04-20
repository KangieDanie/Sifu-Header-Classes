#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_ItemBase.generated.h"

USTRUCT()
struct FRigUnit_ItemBase : public FRigUnit {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_ItemBase();
};


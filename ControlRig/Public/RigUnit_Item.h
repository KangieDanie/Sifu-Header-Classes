#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigElementKey.h"
#include "RigUnit_Item.generated.h"

USTRUCT()
struct FRigUnit_Item : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Item;
    
    CONTROLRIG_API FRigUnit_Item();
};


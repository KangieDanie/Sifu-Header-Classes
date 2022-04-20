#pragma once
#include "CoreMinimal.h"
#include "RigUnit_ItemBase.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnit_ItemExists.generated.h"

USTRUCT()
struct FRigUnit_ItemExists : public FRigUnit_ItemBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Item;
    
    UPROPERTY()
    bool Exists;
    
    UPROPERTY()
    FCachedRigElement CachedIndex;
    
    CONTROLRIG_API FRigUnit_ItemExists();
};


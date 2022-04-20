#pragma once
#include "CoreMinimal.h"
#include "RigUnit_ItemBase.h"
#include "RigElementKey.h"
#include "RigUnit_ItemReplace.generated.h"

USTRUCT()
struct FRigUnit_ItemReplace : public FRigUnit_ItemBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Item;
    
    UPROPERTY()
    FName Old;
    
    UPROPERTY()
    FName New;
    
    UPROPERTY()
    FRigElementKey Result;
    
    CONTROLRIG_API FRigUnit_ItemReplace();
};


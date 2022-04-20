#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CollectionBaseMutable.h"
#include "RigElementKeyCollection.h"
#include "RigElementKey.h"
#include "ControlRigExecuteContext.h"
#include "RigUnit_CollectionLoop.generated.h"

USTRUCT()
struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKeyCollection Collection;
    
    UPROPERTY()
    FRigElementKey Item;
    
    UPROPERTY()
    int32 Index;
    
    UPROPERTY()
    int32 Count;
    
    UPROPERTY()
    float Ratio;
    
    UPROPERTY()
    bool Continue;
    
    UPROPERTY()
    FControlRigExecuteContext Completed;
    
    CONTROLRIG_API FRigUnit_CollectionLoop();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CollectionBase.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionReverse.generated.h"

USTRUCT()
struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKeyCollection Collection;
    
    UPROPERTY()
    FRigElementKeyCollection Reversed;
    
    CONTROLRIG_API FRigUnit_CollectionReverse();
};


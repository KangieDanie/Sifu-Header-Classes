#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CollectionBase.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionDifference.generated.h"

USTRUCT()
struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKeyCollection A;
    
    UPROPERTY()
    FRigElementKeyCollection B;
    
    UPROPERTY()
    FRigElementKeyCollection Collection;
    
    CONTROLRIG_API FRigUnit_CollectionDifference();
};


#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit_ModifyTransforms_WorkData.generated.h"

USTRUCT()
struct FRigUnit_ModifyTransforms_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCachedRigElement> CachedItems;
    
    CONTROLRIG_API FRigUnit_ModifyTransforms_WorkData();
};


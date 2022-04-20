#pragma once
#include "CoreMinimal.h"
#include "CRSimPointContainer.h"
#include "CachedRigElement.h"
#include "RigUnit_PointSimulation_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_PointSimulation_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCRSimPointContainer Simulation;
    
    UPROPERTY()
    TArray<FCachedRigElement> BoneIndices;
    
    CONTROLRIG_API FRigUnit_PointSimulation_WorkData();
};


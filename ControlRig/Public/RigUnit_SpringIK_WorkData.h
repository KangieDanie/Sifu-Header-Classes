#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CRSimPointContainer.h"
#include "RigUnit_SpringIK_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SpringIK_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FCachedRigElement> BoneIndices;
    
    UPROPERTY()
    FCachedRigElement CachedPoleVector;
    
    UPROPERTY()
    TArray<FTransform> Transforms;
    
    UPROPERTY()
    FCRSimPointContainer Simulation;
    
    CONTROLRIG_API FRigUnit_SpringIK_WorkData();
};


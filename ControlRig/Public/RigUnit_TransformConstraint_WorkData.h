#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=ConstraintData -FallbackName=ConstraintData
#include "RigUnit_TransformConstraint_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_TransformConstraint_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FConstraintData> ConstraintData;
    
    UPROPERTY()
    TMap<int32, int32> ConstraintDataToTargets;
    
    CONTROLRIG_API FRigUnit_TransformConstraint_WorkData();
};


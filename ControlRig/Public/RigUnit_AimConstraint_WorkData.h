#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=ConstraintData -FallbackName=ConstraintData
#include "RigUnit_AimConstraint_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_AimConstraint_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FConstraintData> ConstraintData;
    
    CONTROLRIG_API FRigUnit_AimConstraint_WorkData();
};


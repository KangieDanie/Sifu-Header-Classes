#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_DebugTransformArrayMutable_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_DebugTransformArrayMutable_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTransform> DrawTransforms;
    
    CONTROLRIG_API FRigUnit_DebugTransformArrayMutable_WorkData();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=ConstraintOffset -FallbackName=ConstraintOffset
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=TransformConstraint -FallbackName=TransformConstraint
#include "ConstraintNodeData.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FConstraintNodeData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform RelativeParent;
    
    UPROPERTY()
    FConstraintOffset ConstraintOffset;
    
    UPROPERTY()
    FName LinkedNode;
    
private:
    UPROPERTY()
    TArray<FTransformConstraint> Constraints;
    
public:
    FConstraintNodeData();
};


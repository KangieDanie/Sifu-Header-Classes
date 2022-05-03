#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "ETransformSpaceMode.h"
#include "RigUnit_TransformConstraint_WorkData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ConstraintTarget.h"
#include "RigUnit_TransformConstraint.generated.h"

USTRUCT()
struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Bone;
    
    UPROPERTY(EditAnywhere)
    ETransformSpaceMode BaseTransformSpace;
    
    UPROPERTY(EditAnywhere)
    FTransform BaseTransform;
    
    UPROPERTY(EditAnywhere)
    FName BaseBone;
    
    UPROPERTY(EditAnywhere)
    TArray<FConstraintTarget> Targets;
    
    UPROPERTY(EditAnywhere)
    bool bUseInitialTransforms;
    
private:
    UPROPERTY(Transient)
    FRigUnit_TransformConstraint_WorkData WorkData;
    
public:
    CONTROLRIG_API FRigUnit_TransformConstraint();
};


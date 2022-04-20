#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigElementKey.h"
#include "ETransformSpaceMode.h"
#include "ConstraintTarget.h"
#include "RigUnit_TransformConstraint_WorkData.h"
#include "RigUnit_TransformConstraintPerItem.generated.h"

USTRUCT()
struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(EditAnywhere)
    ETransformSpaceMode BaseTransformSpace;
    
    UPROPERTY(EditAnywhere)
    FTransform BaseTransform;
    
    UPROPERTY(EditAnywhere)
    FRigElementKey BaseItem;
    
    UPROPERTY(EditAnywhere)
    TArray<FConstraintTarget> Targets;
    
    UPROPERTY(EditAnywhere)
    bool bUseInitialTransforms;
    
private:
    UPROPERTY(Transient)
    FRigUnit_TransformConstraint_WorkData WorkData;
    
public:
    CONTROLRIG_API FRigUnit_TransformConstraintPerItem();
};


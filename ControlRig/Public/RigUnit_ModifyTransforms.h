#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "EControlRigModifyBoneMode.h"
#include "RigUnit_ModifyTransforms_PerItem.h"
#include "RigUnit_ModifyTransforms_WorkData.h"
#include "RigUnit_ModifyTransforms.generated.h"

USTRUCT()
struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FRigUnit_ModifyTransforms_PerItem> ItemToModify;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    float WeightMinimum;
    
    UPROPERTY()
    float WeightMaximum;
    
    UPROPERTY()
    EControlRigModifyBoneMode Mode;
    
    UPROPERTY(Transient)
    FRigUnit_ModifyTransforms_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_ModifyTransforms();
};


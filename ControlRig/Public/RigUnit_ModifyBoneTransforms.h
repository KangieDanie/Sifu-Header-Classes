#pragma once
#include "CoreMinimal.h"
#include "RigUnit_ModifyBoneTransforms_WorkData.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_ModifyBoneTransforms_PerBone.h"
#include "EControlRigModifyBoneMode.h"
#include "RigUnit_ModifyBoneTransforms.generated.h"

USTRUCT()
struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    float WeightMinimum;
    
    UPROPERTY()
    float WeightMaximum;
    
    UPROPERTY()
    EControlRigModifyBoneMode Mode;
    
    UPROPERTY(Transient)
    FRigUnit_ModifyBoneTransforms_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_ModifyBoneTransforms();
};


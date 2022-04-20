#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_DistributeRotation_Rotation.h"
#include "EControlRigAnimEasingType.h"
#include "RigUnit_DistributeRotation_WorkData.h"
#include "RigUnit_DistributeRotation.generated.h"

USTRUCT()
struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StartBone;
    
    UPROPERTY()
    FName EndBone;
    
    UPROPERTY()
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;
    
    UPROPERTY()
    EControlRigAnimEasingType RotationEaseType;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY(Transient)
    FRigUnit_DistributeRotation_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_DistributeRotation();
};


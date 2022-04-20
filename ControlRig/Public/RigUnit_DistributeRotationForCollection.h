#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_DistributeRotation_Rotation.h"
#include "RigElementKeyCollection.h"
#include "EControlRigAnimEasingType.h"
#include "RigUnit_DistributeRotation_WorkData.h"
#include "RigUnit_DistributeRotationForCollection.generated.h"

USTRUCT()
struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKeyCollection Items;
    
    UPROPERTY()
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;
    
    UPROPERTY()
    EControlRigAnimEasingType RotationEaseType;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY(Transient)
    FRigUnit_DistributeRotation_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_DistributeRotationForCollection();
};


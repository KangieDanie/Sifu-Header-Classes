#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_AimBone_Target.h"
#include "RigUnit_AimBone_DebugSettings.h"
#include "CachedRigElement.h"
#include "RigUnit_AimBone.generated.h"

USTRUCT()
struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Bone;
    
    UPROPERTY()
    FRigUnit_AimBone_Target Primary;
    
    UPROPERTY()
    FRigUnit_AimBone_Target Secondary;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY()
    FRigUnit_AimBone_DebugSettings DebugSettings;
    
    UPROPERTY()
    FCachedRigElement CachedBoneIndex;
    
    UPROPERTY()
    FCachedRigElement PrimaryCachedSpace;
    
    UPROPERTY()
    FCachedRigElement SecondaryCachedSpace;
    
    CONTROLRIG_API FRigUnit_AimBone();
};


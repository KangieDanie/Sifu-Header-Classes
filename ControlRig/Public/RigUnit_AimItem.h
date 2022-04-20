#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnit_AimItem_Target.h"
#include "RigUnit_AimBone_DebugSettings.h"
#include "RigUnit_AimItem.generated.h"

USTRUCT()
struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Item;
    
    UPROPERTY()
    FRigUnit_AimItem_Target Primary;
    
    UPROPERTY()
    FRigUnit_AimItem_Target Secondary;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    FRigUnit_AimBone_DebugSettings DebugSettings;
    
    UPROPERTY()
    FCachedRigElement CachedItem;
    
    UPROPERTY()
    FCachedRigElement PrimaryCachedSpace;
    
    UPROPERTY()
    FCachedRigElement SecondaryCachedSpace;
    
    CONTROLRIG_API FRigUnit_AimItem();
};


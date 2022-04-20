#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_AimItem_Target.h"
#include "RigUnit_AimBone_DebugSettings.h"
#include "CachedRigElement.h"
#include "RigUnit_AimBoneMath.generated.h"

USTRUCT()
struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform InputTransform;
    
    UPROPERTY()
    FRigUnit_AimItem_Target Primary;
    
    UPROPERTY()
    FRigUnit_AimItem_Target Secondary;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    FTransform Result;
    
    UPROPERTY()
    FRigUnit_AimBone_DebugSettings DebugSettings;
    
    UPROPERTY()
    FCachedRigElement PrimaryCachedSpace;
    
    UPROPERTY()
    FCachedRigElement SecondaryCachedSpace;
    
    CONTROLRIG_API FRigUnit_AimBoneMath();
};


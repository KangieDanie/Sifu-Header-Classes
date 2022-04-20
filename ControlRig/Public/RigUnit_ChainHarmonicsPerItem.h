#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "RigUnit_HighlevelBaseMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_ChainHarmonics_Pendulum.h"
#include "RigElementKey.h"
#include "RigUnit_ChainHarmonics_Reach.h"
#include "RigUnit_ChainHarmonics_Wave.h"
#include "RigUnit_ChainHarmonics_WorkData.h"
#include "RigUnit_ChainHarmonicsPerItem.generated.h"

USTRUCT()
struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey ChainRoot;
    
    UPROPERTY()
    FVector Speed;
    
    UPROPERTY()
    FRigUnit_ChainHarmonics_Reach Reach;
    
    UPROPERTY()
    FRigUnit_ChainHarmonics_Wave Wave;
    
    UPROPERTY()
    FRuntimeFloatCurve WaveCurve;
    
    UPROPERTY()
    FRigUnit_ChainHarmonics_Pendulum Pendulum;
    
    UPROPERTY()
    bool bDrawDebug;
    
    UPROPERTY()
    FTransform DrawWorldOffset;
    
    UPROPERTY(Transient)
    FRigUnit_ChainHarmonics_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_ChainHarmonicsPerItem();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_ChainHarmonics_WorkData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_ChainHarmonics_Reach.h"
#include "RigUnit_ChainHarmonics_Pendulum.h"
#include "RigUnit_ChainHarmonics_Wave.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "RigUnit_ChainHarmonics.generated.h"

USTRUCT()
struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ChainRoot;
    
    UPROPERTY()
    FVector Speed;
    
    UPROPERTY()
    FRigUnit_ChainHarmonics_Reach Reach;
    
    UPROPERTY()
    FRigUnit_ChainHarmonics_Wave wave;
    
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
    
    CONTROLRIG_API FRigUnit_ChainHarmonics();
};


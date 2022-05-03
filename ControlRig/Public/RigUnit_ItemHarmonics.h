#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_BoneHarmonics_WorkData.h"
#include "EControlRigAnimEasingType.h"
#include "RigUnit_Harmonics_TargetItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigRotationOrder.h"
#include "RigUnit_ItemHarmonics.generated.h"

USTRUCT()
struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FRigUnit_Harmonics_TargetItem> Targets;
    
    UPROPERTY()
    FVector WaveSpeed;
    
    UPROPERTY()
    FVector WaveFrequency;
    
    UPROPERTY()
    FVector WaveAmplitude;
    
    UPROPERTY()
    FVector WaveOffset;
    
    UPROPERTY()
    FVector WaveNoise;
    
    UPROPERTY()
    EControlRigAnimEasingType WaveEase;
    
    UPROPERTY()
    float WaveMinimum;
    
    UPROPERTY()
    float WaveMaximum;
    
    UPROPERTY()
    EControlRigRotationOrder RotationOrder;
    
    UPROPERTY(Transient)
    FRigUnit_BoneHarmonics_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_ItemHarmonics();
};


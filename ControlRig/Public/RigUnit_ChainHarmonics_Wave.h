#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigAnimEasingType.h"
#include "RigUnit_ChainHarmonics_Wave.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ChainHarmonics_Wave {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY()
    FVector WaveFrequency;
    
    UPROPERTY()
    FVector WaveAmplitude;
    
    UPROPERTY()
    FVector WaveOffset;
    
    UPROPERTY()
    FVector WaveNoise;
    
    UPROPERTY()
    float WaveMinimum;
    
    UPROPERTY()
    float WaveMaximum;
    
    UPROPERTY()
    EControlRigAnimEasingType WaveEase;
    
    CONTROLRIG_API FRigUnit_ChainHarmonics_Wave();
};


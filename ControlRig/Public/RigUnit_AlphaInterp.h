#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputRange -FallbackName=InputRange
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBiasClamp -FallbackName=InputScaleBiasClamp
#include "RigUnit_AlphaInterp.generated.h"

USTRUCT()
struct FRigUnit_AlphaInterp : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    float Scale;
    
    UPROPERTY()
    float Bias;
    
    UPROPERTY()
    bool bMapRange;
    
    UPROPERTY()
    FInputRange InRange;
    
    UPROPERTY()
    FInputRange OutRange;
    
    UPROPERTY()
    bool bClampResult;
    
    UPROPERTY()
    float ClampMin;
    
    UPROPERTY()
    float ClampMax;
    
    UPROPERTY()
    bool bInterpResult;
    
    UPROPERTY()
    float InterpSpeedIncreasing;
    
    UPROPERTY()
    float InterpSpeedDecreasing;
    
    UPROPERTY()
    float Result;
    
    UPROPERTY()
    FInputScaleBiasClamp ScaleBiasClamp;
    
    CONTROLRIG_API FRigUnit_AlphaInterp();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_SimBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputRange -FallbackName=InputRange
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBiasClamp -FallbackName=InputScaleBiasClamp
#include "RigUnit_AlphaInterpVector.generated.h"

USTRUCT()
struct FRigUnit_AlphaInterpVector : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Value;
    
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
    FVector Result;
    
    UPROPERTY()
    FInputScaleBiasClamp ScaleBiasClamp;
    
    CONTROLRIG_API FRigUnit_AlphaInterpVector();
};


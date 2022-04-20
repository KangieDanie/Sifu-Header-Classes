#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineCustomTimeStep -FallbackName=EngineCustomTimeStep
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "FixedFrameRateCustomTimeStep.generated.h"

UCLASS(Abstract)
class TIMEMANAGEMENT_API UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FFrameRate FixedFrameRate;
    
public:
    UFixedFrameRateCustomTimeStep();
};


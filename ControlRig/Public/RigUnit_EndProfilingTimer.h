#pragma once
#include "CoreMinimal.h"
#include "RigUnit_DebugBaseMutable.h"
#include "RigUnit_EndProfilingTimer.generated.h"

USTRUCT()
struct FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NumberOfMeasurements;
    
    UPROPERTY()
    FString Prefix;
    
    UPROPERTY()
    float AccumulatedTime;
    
    UPROPERTY()
    int32 MeasurementsLeft;
    
    CONTROLRIG_API FRigUnit_EndProfilingTimer();
};


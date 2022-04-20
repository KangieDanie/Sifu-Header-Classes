#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_TimeOffsetFloat.generated.h"

USTRUCT()
struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    float SecondsAgo;
    
    UPROPERTY()
    int32 BufferSize;
    
    UPROPERTY()
    float TimeRange;
    
    UPROPERTY()
    float Result;
    
    UPROPERTY()
    TArray<float> Buffer;
    
    UPROPERTY()
    TArray<float> DeltaTimes;
    
    UPROPERTY()
    int32 LastInsertIndex;
    
    UPROPERTY()
    int32 UpperBound;
    
    CONTROLRIG_API FRigUnit_TimeOffsetFloat();
};


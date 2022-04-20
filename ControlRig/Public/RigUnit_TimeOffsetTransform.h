#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_TimeOffsetTransform.generated.h"

USTRUCT()
struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Value;
    
    UPROPERTY()
    float SecondsAgo;
    
    UPROPERTY()
    int32 BufferSize;
    
    UPROPERTY()
    float TimeRange;
    
    UPROPERTY()
    FTransform Result;
    
    UPROPERTY()
    TArray<FTransform> Buffer;
    
    UPROPERTY()
    TArray<float> DeltaTimes;
    
    UPROPERTY()
    int32 LastInsertIndex;
    
    UPROPERTY()
    int32 UpperBound;
    
    CONTROLRIG_API FRigUnit_TimeOffsetTransform();
};


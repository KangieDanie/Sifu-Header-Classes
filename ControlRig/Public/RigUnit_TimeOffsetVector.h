#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_SimBase.h"
#include "RigUnit_TimeOffsetVector.generated.h"

USTRUCT()
struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Value;
    
    UPROPERTY()
    float SecondsAgo;
    
    UPROPERTY()
    int32 BufferSize;
    
    UPROPERTY()
    float TimeRange;
    
    UPROPERTY()
    FVector Result;
    
    UPROPERTY()
    TArray<FVector> Buffer;
    
    UPROPERTY()
    TArray<float> DeltaTimes;
    
    UPROPERTY()
    int32 LastInsertIndex;
    
    UPROPERTY()
    int32 UpperBound;
    
    CONTROLRIG_API FRigUnit_TimeOffsetVector();
};


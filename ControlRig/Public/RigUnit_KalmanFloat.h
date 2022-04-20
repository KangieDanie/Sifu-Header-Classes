#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_KalmanFloat.generated.h"

USTRUCT()
struct FRigUnit_KalmanFloat : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    int32 BufferSize;
    
    UPROPERTY()
    float Result;
    
    UPROPERTY()
    TArray<float> Buffer;
    
    UPROPERTY()
    int32 LastInsertIndex;
    
    CONTROLRIG_API FRigUnit_KalmanFloat();
};


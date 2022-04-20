#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_KalmanTransform.generated.h"

USTRUCT()
struct FRigUnit_KalmanTransform : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Value;
    
    UPROPERTY()
    int32 BufferSize;
    
    UPROPERTY()
    FTransform Result;
    
    UPROPERTY()
    TArray<FTransform> Buffer;
    
    UPROPERTY()
    int32 LastInsertIndex;
    
    CONTROLRIG_API FRigUnit_KalmanTransform();
};


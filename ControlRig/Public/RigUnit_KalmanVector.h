#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_SimBase.h"
#include "RigUnit_KalmanVector.generated.h"

USTRUCT()
struct FRigUnit_KalmanVector : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Value;
    
    UPROPERTY()
    int32 BufferSize;
    
    UPROPERTY()
    FVector Result;
    
    UPROPERTY()
    TArray<FVector> Buffer;
    
    UPROPERTY()
    int32 LastInsertIndex;
    
    CONTROLRIG_API FRigUnit_KalmanVector();
};


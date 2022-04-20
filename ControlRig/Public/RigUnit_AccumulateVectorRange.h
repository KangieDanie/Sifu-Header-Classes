#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_AccumulateVectorRange.generated.h"

USTRUCT()
struct FRigUnit_AccumulateVectorRange : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Value;
    
    UPROPERTY()
    FVector Minimum;
    
    UPROPERTY()
    FVector Maximum;
    
    UPROPERTY()
    FVector AccumulatedMinimum;
    
    UPROPERTY()
    FVector AccumulatedMaximum;
    
    CONTROLRIG_API FRigUnit_AccumulateVectorRange();
};


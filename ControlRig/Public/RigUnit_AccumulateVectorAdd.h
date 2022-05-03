#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_SimBase.h"
#include "RigUnit_AccumulateVectorAdd.generated.h"

USTRUCT()
struct FRigUnit_AccumulateVectorAdd : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Increment;
    
    UPROPERTY()
    FVector InitialValue;
    
    UPROPERTY()
    bool bIntegrateDeltaTime;
    
    UPROPERTY()
    FVector Result;
    
    UPROPERTY()
    FVector AccumulatedValue;
    
    CONTROLRIG_API FRigUnit_AccumulateVectorAdd();
};


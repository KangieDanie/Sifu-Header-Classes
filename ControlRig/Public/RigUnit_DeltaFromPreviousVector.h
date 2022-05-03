#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_SimBase.h"
#include "RigUnit_DeltaFromPreviousVector.generated.h"

USTRUCT()
struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Value;
    
    UPROPERTY()
    FVector Delta;
    
    UPROPERTY()
    FVector PreviousValue;
    
    UPROPERTY()
    FVector Cache;
    
    CONTROLRIG_API FRigUnit_DeltaFromPreviousVector();
};


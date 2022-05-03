#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RigUnit_ConvertVectorToRotation.generated.h"

USTRUCT()
struct FRigUnit_ConvertVectorToRotation : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Input;
    
    UPROPERTY()
    FRotator Result;
    
    CONTROLRIG_API FRigUnit_ConvertVectorToRotation();
};


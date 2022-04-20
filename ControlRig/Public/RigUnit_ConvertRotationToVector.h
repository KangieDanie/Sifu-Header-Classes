#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_ConvertRotationToVector.generated.h"

USTRUCT()
struct FRigUnit_ConvertRotationToVector : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRotator Input;
    
    UPROPERTY()
    FVector Result;
    
    CONTROLRIG_API FRigUnit_ConvertRotationToVector();
};


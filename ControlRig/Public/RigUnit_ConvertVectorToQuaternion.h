#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_ConvertVectorToQuaternion.generated.h"

USTRUCT()
struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Input;
    
    UPROPERTY()
    FQuat Result;
    
    CONTROLRIG_API FRigUnit_ConvertVectorToQuaternion();
};


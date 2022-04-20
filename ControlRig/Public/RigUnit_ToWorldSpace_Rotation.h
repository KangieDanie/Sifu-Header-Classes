#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_ToWorldSpace_Rotation.generated.h"

USTRUCT()
struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Rotation;
    
    UPROPERTY()
    FQuat World;
    
    CONTROLRIG_API FRigUnit_ToWorldSpace_Rotation();
};


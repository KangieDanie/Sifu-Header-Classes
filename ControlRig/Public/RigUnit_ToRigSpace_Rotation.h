#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_ToRigSpace_Rotation.generated.h"

USTRUCT()
struct FRigUnit_ToRigSpace_Rotation : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Rotation;
    
    UPROPERTY()
    FQuat Global;
    
    CONTROLRIG_API FRigUnit_ToRigSpace_Rotation();
};


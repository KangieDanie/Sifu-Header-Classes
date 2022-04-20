#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_ToRigSpace_Transform.generated.h"

USTRUCT()
struct FRigUnit_ToRigSpace_Transform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FTransform Global;
    
    CONTROLRIG_API FRigUnit_ToRigSpace_Transform();
};


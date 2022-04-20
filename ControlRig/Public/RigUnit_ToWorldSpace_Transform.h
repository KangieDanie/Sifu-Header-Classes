#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_ToWorldSpace_Transform.generated.h"

USTRUCT()
struct FRigUnit_ToWorldSpace_Transform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FTransform World;
    
    CONTROLRIG_API FRigUnit_ToWorldSpace_Transform();
};


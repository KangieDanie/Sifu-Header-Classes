#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
#include "RigUnit_ToWorldSpace_Location.generated.h"

USTRUCT()
struct FRigUnit_ToWorldSpace_Location : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FVector World;
    
    CONTROLRIG_API FRigUnit_ToWorldSpace_Location();
};


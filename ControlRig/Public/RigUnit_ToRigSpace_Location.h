#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_ToRigSpace_Location.generated.h"

USTRUCT()
struct FRigUnit_ToRigSpace_Location : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FVector Global;
    
    CONTROLRIG_API FRigUnit_ToRigSpace_Location();
};


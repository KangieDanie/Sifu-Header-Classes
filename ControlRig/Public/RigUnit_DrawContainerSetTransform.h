#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_DrawContainerSetTransform.generated.h"

USTRUCT()
struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName InstructionName;
    
    UPROPERTY()
    FTransform Transform;
    
    CONTROLRIG_API FRigUnit_DrawContainerSetTransform();
};


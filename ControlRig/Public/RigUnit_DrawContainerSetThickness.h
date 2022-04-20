#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_DrawContainerSetThickness.generated.h"

USTRUCT()
struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName InstructionName;
    
    UPROPERTY()
    float Thickness;
    
    CONTROLRIG_API FRigUnit_DrawContainerSetThickness();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigUnit_DrawContainerSetColor.generated.h"

USTRUCT()
struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName InstructionName;
    
    UPROPERTY()
    FLinearColor Color;
    
    CONTROLRIG_API FRigUnit_DrawContainerSetColor();
};


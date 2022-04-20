#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_DrawContainerGetInstruction.generated.h"

USTRUCT()
struct FRigUnit_DrawContainerGetInstruction : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName InstructionName;
    
    UPROPERTY()
    FLinearColor Color;
    
    UPROPERTY()
    FTransform Transform;
    
    CONTROLRIG_API FRigUnit_DrawContainerGetInstruction();
};


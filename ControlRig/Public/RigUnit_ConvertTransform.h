#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EulerTransform -FallbackName=EulerTransform
#include "RigUnit_ConvertTransform.generated.h"

USTRUCT()
struct FRigUnit_ConvertTransform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Input;
    
    UPROPERTY()
    FEulerTransform Result;
    
    CONTROLRIG_API FRigUnit_ConvertTransform();
};


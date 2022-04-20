#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EulerTransform -FallbackName=EulerTransform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_ConvertEulerTransform.generated.h"

USTRUCT()
struct FRigUnit_ConvertEulerTransform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FEulerTransform Input;
    
    UPROPERTY()
    FTransform Result;
    
    CONTROLRIG_API FRigUnit_ConvertEulerTransform();
};


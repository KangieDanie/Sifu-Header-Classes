#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathTransformBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_MathTransformMakeRelative.generated.h"

USTRUCT()
struct FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Global;
    
    UPROPERTY()
    FTransform Parent;
    
    UPROPERTY()
    FTransform Local;
    
    CONTROLRIG_API FRigUnit_MathTransformMakeRelative();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathTransformBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_MathTransformMakeAbsolute.generated.h"

USTRUCT()
struct FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Local;
    
    UPROPERTY()
    FTransform Parent;
    
    UPROPERTY()
    FTransform Global;
    
    CONTROLRIG_API FRigUnit_MathTransformMakeAbsolute();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AnimBase.h"
#include "EControlRigAnimEasingType.h"
#include "RigUnit_AnimEasingType.generated.h"

USTRUCT()
struct FRigUnit_AnimEasingType : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    EControlRigAnimEasingType Type;
    
    CONTROLRIG_API FRigUnit_AnimEasingType();
};


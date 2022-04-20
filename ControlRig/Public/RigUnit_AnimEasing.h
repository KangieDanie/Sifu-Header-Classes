#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AnimBase.h"
#include "EControlRigAnimEasingType.h"
#include "RigUnit_AnimEasing.generated.h"

USTRUCT()
struct FRigUnit_AnimEasing : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    EControlRigAnimEasingType Type;
    
    UPROPERTY()
    float SourceMinimum;
    
    UPROPERTY()
    float SourceMaximum;
    
    UPROPERTY()
    float TargetMinimum;
    
    UPROPERTY()
    float TargetMaximum;
    
    UPROPERTY()
    float Result;
    
    CONTROLRIG_API FRigUnit_AnimEasing();
};


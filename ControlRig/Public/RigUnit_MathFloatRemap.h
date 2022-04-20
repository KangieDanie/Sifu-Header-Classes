#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatRemap.generated.h"

USTRUCT()
struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    float SourceMinimum;
    
    UPROPERTY()
    float SourceMaximum;
    
    UPROPERTY()
    float TargetMinimum;
    
    UPROPERTY()
    float TargetMaximum;
    
    UPROPERTY()
    bool bClamp;
    
    UPROPERTY()
    float Result;
    
    CONTROLRIG_API FRigUnit_MathFloatRemap();
};


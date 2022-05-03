#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_FABRIK_WorkData.h"
#include "RigUnit_FABRIK.generated.h"

USTRUCT()
struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StartBone;
    
    UPROPERTY()
    FName EffectorBone;
    
    UPROPERTY()
    FTransform EffectorTransform;
    
    UPROPERTY()
    float Precision;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY()
    int32 MaxIterations;
    
    UPROPERTY(Transient)
    FRigUnit_FABRIK_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_FABRIK();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_SlideChain_WorkData.h"
#include "RigUnit_SlideChain.generated.h"

USTRUCT()
struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StartBone;
    
    UPROPERTY()
    FName EndBone;
    
    UPROPERTY()
    float SlideAmount;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY(Transient)
    FRigUnit_SlideChain_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_SlideChain();
};


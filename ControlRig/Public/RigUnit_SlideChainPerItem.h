#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_SlideChain_WorkData.h"
#include "RigUnit_SlideChainPerItem.generated.h"

USTRUCT()
struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKeyCollection Items;
    
    UPROPERTY()
    float SlideAmount;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY(Transient)
    FRigUnit_SlideChain_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_SlideChainPerItem();
};


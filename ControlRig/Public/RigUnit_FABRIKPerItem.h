#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigElementKeyCollection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_FABRIK_WorkData.h"
#include "RigUnit_FABRIKPerItem.generated.h"

USTRUCT()
struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKeyCollection Items;
    
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
    
    CONTROLRIG_API FRigUnit_FABRIKPerItem();
};


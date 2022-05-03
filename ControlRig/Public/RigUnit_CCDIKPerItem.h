#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CCDIK_WorkData.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigElementKeyCollection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_CCDIK_RotationLimitPerItem.h"
#include "RigUnit_CCDIKPerItem.generated.h"

USTRUCT()
struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable {
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
    int32 MaxIterations;
    
    UPROPERTY()
    bool bStartFromTail;
    
    UPROPERTY()
    float BaseRotationLimit;
    
    UPROPERTY()
    TArray<FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY()
    FRigUnit_CCDIK_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_CCDIKPerItem();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigElementKeyCollection.h"
#include "EControlRigAnimEasingType.h"
#include "RigUnit_TwistBones_WorkData.h"
#include "RigUnit_TwistBonesPerItem.generated.h"

USTRUCT()
struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKeyCollection Items;
    
    UPROPERTY()
    FVector TwistAxis;
    
    UPROPERTY()
    FVector PoleAxis;
    
    UPROPERTY()
    EControlRigAnimEasingType TwistEaseType;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY(Transient)
    FRigUnit_TwistBones_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_TwistBonesPerItem();
};


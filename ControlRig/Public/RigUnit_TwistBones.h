#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigAnimEasingType.h"
#include "RigUnit_TwistBones_WorkData.h"
#include "RigUnit_TwistBones.generated.h"

USTRUCT()
struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StartBone;
    
    UPROPERTY()
    FName EndBone;
    
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
    
    CONTROLRIG_API FRigUnit_TwistBones();
};


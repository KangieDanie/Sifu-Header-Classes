#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_TwoBoneIKSimpleTransforms.generated.h"

USTRUCT()
struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Root;
    
    UPROPERTY()
    FVector PoleVector;
    
    UPROPERTY()
    FTransform Effector;
    
    UPROPERTY()
    FVector PrimaryAxis;
    
    UPROPERTY()
    FVector SecondaryAxis;
    
    UPROPERTY()
    float SecondaryAxisWeight;
    
    UPROPERTY()
    bool bEnableStretch;
    
    UPROPERTY()
    float StretchStartRatio;
    
    UPROPERTY()
    float StretchMaximumRatio;
    
    UPROPERTY()
    float BoneALength;
    
    UPROPERTY()
    float BoneBLength;
    
    UPROPERTY()
    FTransform Elbow;
    
    CONTROLRIG_API FRigUnit_TwoBoneIKSimpleTransforms();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_TwoBoneIKSimpleVectors.generated.h"

USTRUCT()
struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Root;
    
    UPROPERTY()
    FVector PoleVector;
    
    UPROPERTY()
    FVector Effector;
    
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
    FVector Elbow;
    
    CONTROLRIG_API FRigUnit_TwoBoneIKSimpleVectors();
};


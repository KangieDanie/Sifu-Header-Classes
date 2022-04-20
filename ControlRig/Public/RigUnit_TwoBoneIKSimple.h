#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_HighlevelBaseMutable.h"
#include "CachedRigElement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigVectorKind.h"
#include "RigUnit_TwoBoneIKSimple_DebugSettings.h"
#include "RigUnit_TwoBoneIKSimple.generated.h"

USTRUCT()
struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName BoneA;
    
    UPROPERTY()
    FName BoneB;
    
    UPROPERTY()
    FName EffectorBone;
    
    UPROPERTY()
    FTransform Effector;
    
    UPROPERTY()
    FVector PrimaryAxis;
    
    UPROPERTY()
    FVector SecondaryAxis;
    
    UPROPERTY()
    float SecondaryAxisWeight;
    
    UPROPERTY()
    FVector PoleVector;
    
    UPROPERTY()
    EControlRigVectorKind PoleVectorKind;
    
    UPROPERTY()
    FName PoleVectorSpace;
    
    UPROPERTY()
    bool bEnableStretch;
    
    UPROPERTY()
    float StretchStartRatio;
    
    UPROPERTY()
    float StretchMaximumRatio;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    float BoneALength;
    
    UPROPERTY()
    float BoneBLength;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY()
    FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;
    
    UPROPERTY()
    FCachedRigElement CachedBoneAIndex;
    
    UPROPERTY()
    FCachedRigElement CachedBoneBIndex;
    
    UPROPERTY()
    FCachedRigElement CachedEffectorBoneIndex;
    
    UPROPERTY()
    FCachedRigElement CachedPoleVectorSpaceIndex;
    
    CONTROLRIG_API FRigUnit_TwoBoneIKSimple();
};


#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigElementKey.h"
#include "RigUnit_TwoBoneIKSimple_DebugSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigVectorKind.h"
#include "RigUnit_TwoBoneIKSimplePerItem.generated.h"

USTRUCT()
struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey ItemA;
    
    UPROPERTY()
    FRigElementKey ItemB;
    
    UPROPERTY()
    FRigElementKey EffectorItem;
    
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
    FRigElementKey PoleVectorSpace;
    
    UPROPERTY()
    bool bEnableStretch;
    
    UPROPERTY()
    float StretchStartRatio;
    
    UPROPERTY()
    float StretchMaximumRatio;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    float ItemALength;
    
    UPROPERTY()
    float ItemBLength;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY()
    FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;
    
    UPROPERTY()
    FCachedRigElement CachedItemAIndex;
    
    UPROPERTY()
    FCachedRigElement CachedItemBIndex;
    
    UPROPERTY()
    FCachedRigElement CachedEffectorItemIndex;
    
    UPROPERTY()
    FCachedRigElement CachedPoleVectorSpaceIndex;
    
    CONTROLRIG_API FRigUnit_TwoBoneIKSimplePerItem();
};


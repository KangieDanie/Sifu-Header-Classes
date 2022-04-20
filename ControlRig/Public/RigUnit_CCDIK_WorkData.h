#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=CCDIKChainLink -FallbackName=CCDIKChainLink
#include "CachedRigElement.h"
#include "RigUnit_CCDIK_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_CCDIK_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCCDIKChainLink> Chain;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedItems;
    
    UPROPERTY()
    TArray<int32> RotationLimitIndex;
    
    UPROPERTY()
    TArray<float> RotationLimitsPerItem;
    
    UPROPERTY()
    FCachedRigElement CachedEffector;
    
    CONTROLRIG_API FRigUnit_CCDIK_WorkData();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=FABRIKChainLink -FallbackName=FABRIKChainLink
#include "CachedRigElement.h"
#include "RigUnit_FABRIK_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_FABRIK_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FFABRIKChainLink> Chain;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedItems;
    
    UPROPERTY()
    FCachedRigElement CachedEffector;
    
    CONTROLRIG_API FRigUnit_FABRIK_WorkData();
};


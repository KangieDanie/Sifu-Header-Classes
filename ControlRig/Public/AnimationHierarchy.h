#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=NodeHierarchyWithUserData -FallbackName=NodeHierarchyWithUserData
#include "ConstraintNodeData.h"
#include "AnimationHierarchy.generated.h"

USTRUCT()
struct FAnimationHierarchy : public FNodeHierarchyWithUserData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FConstraintNodeData> UserData;
    
    CONTROLRIG_API FAnimationHierarchy();
};


#pragma once
#include "CoreMinimal.h"
#include "NodeObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "NodeHierarchyData.generated.h"

USTRUCT(BlueprintType)
struct FNodeHierarchyData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FNodeObject> Nodes;
    
    UPROPERTY()
    TArray<FTransform> Transforms;
    
    UPROPERTY()
    TMap<FName, int32> NodeNameToIndexMapping;
    
    ANIMATIONCORE_API FNodeHierarchyData();
};


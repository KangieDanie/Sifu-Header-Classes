#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LevelSequenceBindingReferenceArray.h"
#include "LevelSequenceBindingReferences.generated.h"

USTRUCT(BlueprintType)
struct FLevelSequenceBindingReferences {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences;
    
    UPROPERTY()
    TSet<FGuid> AnimSequenceInstances;
    
public:
    LEVELSEQUENCE_API FLevelSequenceBindingReferences();
};


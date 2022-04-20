#pragma once
#include "CoreMinimal.h"
#include "RigInfluenceEntry.h"
#include "RigElementKey.h"
#include "RigInfluenceMap.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigInfluenceMap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FName EventName;
    
    UPROPERTY()
    TArray<FRigInfluenceEntry> Entries;
    
    UPROPERTY()
    TMap<FRigElementKey, int32> KeyToIndex;
    
public:
    FRigInfluenceMap();
};


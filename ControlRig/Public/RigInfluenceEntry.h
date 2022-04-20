#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigInfluenceEntry.generated.h"

USTRUCT(BlueprintType)
struct FRigInfluenceEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FRigElementKey Source;
    
    UPROPERTY()
    TArray<FRigElementKey> AffectedList;
    
public:
    CONTROLRIG_API FRigInfluenceEntry();
};


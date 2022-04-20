#pragma once
#include "CoreMinimal.h"
#include "RigInfluenceMap.h"
#include "RigInfluenceMapPerEvent.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigInfluenceMapPerEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FRigInfluenceMap> Maps;
    
    UPROPERTY()
    TMap<FName, int32> EventToIndex;
    
public:
    FRigInfluenceMapPerEvent();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "ReplicatedPredictionKeyItem.h"
#include "ReplicatedPredictionKeyMap.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedPredictionKeyMap : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FReplicatedPredictionKeyItem> PredictionKeys;
    
    GAMEPLAYABILITIES_API FReplicatedPredictionKeyMap();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PredictionKey.h"
#include "ReplicatedPredictionKeyItem.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPredictionKey PredictionKey;
    
    GAMEPLAYABILITIES_API FReplicatedPredictionKeyItem();
};


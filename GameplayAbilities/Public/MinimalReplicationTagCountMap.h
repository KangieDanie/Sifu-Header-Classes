#pragma once
#include "CoreMinimal.h"
#include "MinimalReplicationTagCountMap.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FMinimalReplicationTagCountMap {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UAbilitySystemComponent* Owner;
    
    FMinimalReplicationTagCountMap();
};


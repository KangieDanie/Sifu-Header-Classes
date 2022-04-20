#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "TagContainerAggregator.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FTagContainerAggregator {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGameplayTagContainer CapturedActorTags;
    
    UPROPERTY()
    FGameplayTagContainer CapturedSpecTags;
    
    UPROPERTY()
    FGameplayTagContainer ScopedTags;
    
public:
    FTagContainerAggregator();
};


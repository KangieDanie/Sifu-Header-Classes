#pragma once
#include "CoreMinimal.h"
#include "GameplayTagBlueprintPropertyMapping.h"
#include "GameplayTagBlueprintPropertyMap.generated.h"

USTRUCT()
struct GAMEPLAYABILITIES_API FGameplayTagBlueprintPropertyMap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTagBlueprintPropertyMapping> PropertyMappings;
    
public:
    FGameplayTagBlueprintPropertyMap();
};


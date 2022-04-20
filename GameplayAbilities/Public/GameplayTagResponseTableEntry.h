#pragma once
#include "CoreMinimal.h"
#include "GameplayTagReponsePair.h"
#include "GameplayTagResponseTableEntry.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagResponseTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagReponsePair Positive;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagReponsePair Negative;
    
    GAMEPLAYABILITIES_API FGameplayTagResponseTableEntry();
};


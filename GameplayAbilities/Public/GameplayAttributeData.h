#pragma once
#include "CoreMinimal.h"
#include "GameplayAttributeData.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAttributeData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    float BaseValue;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentValue;
    
public:
    FGameplayAttributeData();
};


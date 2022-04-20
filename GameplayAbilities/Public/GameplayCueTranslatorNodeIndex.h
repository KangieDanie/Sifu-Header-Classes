#pragma once
#include "CoreMinimal.h"
#include "GameplayCueTranslatorNodeIndex.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayCueTranslatorNodeIndex {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Index;
    
    FGameplayCueTranslatorNodeIndex();
};


#pragma once
#include "CoreMinimal.h"
#include "GameplayCueTranslationLink.generated.h"

class UGameplayCueTranslator;

USTRUCT(BlueprintType)
struct FGameplayCueTranslationLink {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGameplayCueTranslator* RulesCDO;
    
    GAMEPLAYABILITIES_API FGameplayCueTranslationLink();
};


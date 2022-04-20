#pragma once
#include "CoreMinimal.h"
#include "GameplayCueTranslatorNode.h"
#include "GameplayCueTranslatorNodeIndex.h"
#include "GameplayCueTranslationManager.generated.h"

class UGameplayTagsManager;

USTRUCT()
struct GAMEPLAYABILITIES_API FGameplayCueTranslationManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGameplayCueTranslatorNode> TranslationLUT;
    
    UPROPERTY()
    TMap<FName, FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap;
    
    UPROPERTY()
    UGameplayTagsManager* TagManager;
    
public:
    FGameplayCueTranslationManager();
};


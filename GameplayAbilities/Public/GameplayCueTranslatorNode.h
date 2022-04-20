#pragma once
#include "CoreMinimal.h"
#include "GameplayCueTranslationLink.h"
#include "GameplayCueTranslatorNodeIndex.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayCueTranslatorNode.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCueTranslatorNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGameplayCueTranslationLink> Links;
    
    UPROPERTY()
    FGameplayCueTranslatorNodeIndex CachedIndex;
    
    UPROPERTY()
    FGameplayTag CachedGameplayTag;
    
    UPROPERTY()
    FName CachedGameplayTagName;
    
    GAMEPLAYABILITIES_API FGameplayCueTranslatorNode();
};


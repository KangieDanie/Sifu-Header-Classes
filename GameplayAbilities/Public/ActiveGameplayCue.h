#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "PredictionKey.h"
#include "GameplayCueParameters.h"
#include "ActiveGameplayCue.generated.h"

USTRUCT(BlueprintType)
struct FActiveGameplayCue : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag GameplayCueTag;
    
    UPROPERTY()
    FPredictionKey PredictionKey;
    
    UPROPERTY()
    FGameplayCueParameters Parameters;
    
    UPROPERTY(NotReplicated)
    bool bPredictivelyRemoved;
    
    GAMEPLAYABILITIES_API FActiveGameplayCue();
};


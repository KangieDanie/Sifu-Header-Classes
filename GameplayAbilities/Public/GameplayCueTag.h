#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayCueTag.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCueTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag GameplayCueTag;
    
    GAMEPLAYABILITIES_API FGameplayCueTag();
};


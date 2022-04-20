#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "InheritedTagContainer.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FInheritedTagContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FGameplayTagContainer CombinedTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    FGameplayTagContainer Added;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    FGameplayTagContainer Removed;
    
    FInheritedTagContainer();
};


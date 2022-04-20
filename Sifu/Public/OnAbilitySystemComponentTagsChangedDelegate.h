#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnAbilitySystemComponentTagsChangedDelegate.generated.h"

class USCAbilitySystemComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAbilitySystemComponentTagsChanged, USCAbilitySystemComponent*, _abilityComponent, const FGameplayTag&, _tag, int32, _iCount);


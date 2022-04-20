#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnAbilitySystemComponentTagsChangedDelegateDelegate.generated.h"

class USCAbilitySystemComponent;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnAbilitySystemComponentTagsChangedDelegate, USCAbilitySystemComponent*, _abilityComponent, const FGameplayTag&, _tag, int32, _iCount);


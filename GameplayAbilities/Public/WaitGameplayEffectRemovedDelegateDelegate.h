#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectRemovalInfo.h"
#include "WaitGameplayEffectRemovedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitGameplayEffectRemovedDelegate, const FGameplayEffectRemovalInfo&, GameplayEffectRemovalInfo);


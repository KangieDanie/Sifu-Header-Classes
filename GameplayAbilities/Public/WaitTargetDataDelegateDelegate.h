#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "WaitTargetDataDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitTargetDataDelegate, const FGameplayAbilityTargetDataHandle&, Data);


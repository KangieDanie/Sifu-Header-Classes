#pragma once
#include "CoreMinimal.h"
#include "WaitAbilityActivateDelegateDelegate.generated.h"

class UGameplayAbility;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitAbilityActivateDelegate, UGameplayAbility*, ActivatedAbility);


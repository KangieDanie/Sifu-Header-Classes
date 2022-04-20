#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectSpecHandle.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectAppliedTargetDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGameplayEffectAppliedTargetDelegate, AActor*, Target, FGameplayEffectSpecHandle, SpecHandle, FActiveGameplayEffectHandle, ActiveHandle);


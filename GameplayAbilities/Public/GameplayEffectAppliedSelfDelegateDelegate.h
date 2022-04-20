#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectSpecHandle.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectAppliedSelfDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGameplayEffectAppliedSelfDelegate, AActor*, Source, FGameplayEffectSpecHandle, SpecHandle, FActiveGameplayEffectHandle, ActiveHandle);


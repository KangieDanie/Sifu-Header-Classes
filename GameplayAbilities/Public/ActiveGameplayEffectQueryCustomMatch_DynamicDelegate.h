#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffect.h"
#include "ActiveGameplayEffectQueryCustomMatch_DynamicDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FActiveGameplayEffectQueryCustomMatch_Dynamic, FActiveGameplayEffect, Effect, bool&, bMatches);


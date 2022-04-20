#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SCGameplayEffect.generated.h"

UCLASS()
class SCCORE_API USCGameplayEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USCGameplayEffect();
};


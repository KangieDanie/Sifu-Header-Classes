#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectAttributeCaptureDefinition.h"
#include "GameplayEffectAttributeCaptureSpec.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectAttributeCaptureSpec {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGameplayEffectAttributeCaptureDefinition BackingDefinition;
    
public:
    FGameplayEffectAttributeCaptureSpec();
};


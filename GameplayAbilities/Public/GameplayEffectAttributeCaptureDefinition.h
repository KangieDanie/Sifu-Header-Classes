#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "EGameplayEffectAttributeCaptureSource.h"
#include "GameplayEffectAttributeCaptureDefinition.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectAttributeCaptureDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayAttribute AttributeToCapture;
    
    UPROPERTY(EditDefaultsOnly)
    EGameplayEffectAttributeCaptureSource AttributeSource;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSnapshot;
    
    FGameplayEffectAttributeCaptureDefinition();
};


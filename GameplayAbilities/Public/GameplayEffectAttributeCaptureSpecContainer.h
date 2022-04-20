#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectAttributeCaptureSpec.h"
#include "GameplayEffectAttributeCaptureSpecContainer.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectAttributeCaptureSpecContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGameplayEffectAttributeCaptureSpec> SourceAttributes;
    
    UPROPERTY()
    TArray<FGameplayEffectAttributeCaptureSpec> TargetAttributes;
    
    UPROPERTY()
    bool bHasNonSnapshottedAttributes;
    
public:
    FGameplayEffectAttributeCaptureSpecContainer();
};


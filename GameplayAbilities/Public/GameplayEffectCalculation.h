#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayEffectAttributeCaptureDefinition.h"
#include "GameplayEffectCalculation.generated.h"

UCLASS(Abstract, BlueprintType)
class GAMEPLAYABILITIES_API UGameplayEffectCalculation : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;
    
public:
    UGameplayEffectCalculation();
};


#pragma once
#include "CoreMinimal.h"
#include "PredictionKey.h"
#include "GameplayAbilityLocalAnimMontage.generated.h"

class UAnimMontage;
class UGameplayAbility;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilityLocalAnimMontage {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimMontage* AnimMontage;
    
    UPROPERTY()
    bool PlayBit;
    
    UPROPERTY()
    FPredictionKey PredictionKey;
    
    UPROPERTY()
    UGameplayAbility* AnimatingAbility;
    
    FGameplayAbilityLocalAnimMontage();
};


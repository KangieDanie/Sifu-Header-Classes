#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbility.h"
#include "GameplayAbility_Montage.generated.h"

class UAnimMontage;
class UGameplayEffect;

UCLASS()
class GAMEPLAYABILITIES_API UGameplayAbility_Montage : public UGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* MontageToPlay;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    FName SectionName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UGameplayEffect>> GameplayEffectClassesWhileAnimating;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UGameplayEffect*> GameplayEffectsWhileAnimating;
    
    UGameplayAbility_Montage();
};


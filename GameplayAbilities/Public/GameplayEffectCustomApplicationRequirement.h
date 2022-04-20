#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayEffectSpec.h"
#include "GameplayEffectCustomApplicationRequirement.generated.h"

class UGameplayEffect;
class UAbilitySystemComponent;

UCLASS(Abstract, Blueprintable)
class GAMEPLAYABILITIES_API UGameplayEffectCustomApplicationRequirement : public UObject {
    GENERATED_BODY()
public:
    UGameplayEffectCustomApplicationRequirement();
    UFUNCTION(BlueprintNativeEvent)
    bool CanApplyGameplayEffect(const UGameplayEffect* GameplayEffect, const FGameplayEffectSpec& Spec, UAbilitySystemComponent* ASC) const;
    
};


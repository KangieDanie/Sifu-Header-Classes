#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTask -FallbackName=GameplayTask
#include "AbilityTask.generated.h"

class UGameplayAbility;
class UAbilitySystemComponent;

UCLASS(Abstract)
class GAMEPLAYABILITIES_API UAbilityTask : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGameplayAbility* Ability;
    
    UPROPERTY(Export)
    UAbilitySystemComponent* AbilitySystemComponent;
    
    UAbilityTask();
};


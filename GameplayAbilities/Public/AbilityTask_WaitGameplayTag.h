#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AbilityTask_WaitGameplayTag.generated.h"

class UAbilitySystemComponent;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTag : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UAbilitySystemComponent* OptionalExternalTarget;
    
public:
    UAbilityTask_WaitGameplayTag();
    UFUNCTION()
    void GameplayTagCallback(const FGameplayTag Tag, int32 NewCount);
    
};


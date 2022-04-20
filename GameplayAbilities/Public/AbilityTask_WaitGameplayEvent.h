#pragma once
#include "CoreMinimal.h"
#include "WaitGameplayEventDelegateDelegate.h"
#include "AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AbilityTask_WaitGameplayEvent.generated.h"

class UAbilitySystemComponent;
class UAbilityTask_WaitGameplayEvent;
class UGameplayAbility;
class AActor;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEvent : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitGameplayEventDelegate EventReceived;
    
    UPROPERTY(Export)
    UAbilitySystemComponent* OptionalExternalTarget;
    
    UAbilityTask_WaitGameplayEvent();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(UGameplayAbility* OwningAbility, FGameplayTag EventTag, AActor* NewOptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);
    
};


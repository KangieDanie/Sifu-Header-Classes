#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "WaitGameplayEventDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AbilityTask_WaitGameplayEvent.generated.h"

class UAbilityTask_WaitGameplayEvent;
class AActor;
class UAbilitySystemComponent;
class UGameplayAbility;

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


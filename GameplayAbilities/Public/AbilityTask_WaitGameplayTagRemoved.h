#pragma once
#include "CoreMinimal.h"
#include "WaitGameplayTagDelegateDelegate.h"
#include "AbilityTask_WaitGameplayTag.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AbilityTask_WaitGameplayTagRemoved.generated.h"

class AActor;
class UGameplayAbility;
class UAbilityTask_WaitGameplayTagRemoved;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitGameplayTagDelegate Removed;
    
    UAbilityTask_WaitGameplayTagRemoved();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(UGameplayAbility* OwningAbility, FGameplayTag Tag, AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
    
};


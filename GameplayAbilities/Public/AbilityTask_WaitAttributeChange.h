#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "WaitAttributeChangeDelegateDelegate.h"
#include "GameplayAttribute.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EWaitAttributeChangeComparison.h"
#include "AbilityTask_WaitAttributeChange.generated.h"

class UGameplayAbility;
class UAbilitySystemComponent;
class UAbilityTask_WaitAttributeChange;
class AActor;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitAttributeChange : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitAttributeChangeDelegate OnChange;
    
protected:
    UPROPERTY(Export)
    UAbilitySystemComponent* ExternalOwner;
    
public:
    UAbilityTask_WaitAttributeChange();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison::Type> InComparisonType, float InComparisonValue, bool TriggerOnce, AActor* OptionalExternalOwner);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAttributeChange* WaitForAttributeChange(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, AActor* OptionalExternalOwner);
    
};


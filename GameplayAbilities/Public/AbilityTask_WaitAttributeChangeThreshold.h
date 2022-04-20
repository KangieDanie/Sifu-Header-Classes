#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "EWaitAttributeChangeComparison.h"
#include "WaitAttributeChangeThresholdDelegateDelegate.h"
#include "GameplayAttribute.h"
#include "AbilityTask_WaitAttributeChangeThreshold.generated.h"

class UAbilitySystemComponent;
class UAbilityTask_WaitAttributeChangeThreshold;
class UGameplayAbility;
class AActor;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitAttributeChangeThresholdDelegate OnChange;
    
protected:
    UPROPERTY(Export)
    UAbilitySystemComponent* ExternalOwner;
    
public:
    UAbilityTask_WaitAttributeChangeThreshold();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner);
    
};


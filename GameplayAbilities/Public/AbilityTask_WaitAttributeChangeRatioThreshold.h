#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "EWaitAttributeChangeComparison.h"
#include "WaitAttributeChangeRatioThresholdDelegateDelegate.h"
#include "GameplayAttribute.h"
#include "AbilityTask_WaitAttributeChangeRatioThreshold.generated.h"

class UAbilitySystemComponent;
class UAbilityTask_WaitAttributeChangeRatioThreshold;
class UGameplayAbility;
class AActor;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitAttributeChangeRatioThresholdDelegate OnChange;
    
protected:
    UPROPERTY(Export)
    UAbilitySystemComponent* ExternalOwner;
    
public:
    UAbilityTask_WaitAttributeChangeRatioThreshold();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner);
    
};


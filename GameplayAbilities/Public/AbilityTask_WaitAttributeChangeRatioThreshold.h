#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "WaitAttributeChangeRatioThresholdDelegateDelegate.h"
#include "GameplayAttribute.h"
#include "EWaitAttributeChangeComparison.h"
#include "AbilityTask_WaitAttributeChangeRatioThreshold.generated.h"

class AActor;
class UAbilityTask_WaitAttributeChangeRatioThreshold;
class UAbilitySystemComponent;
class UGameplayAbility;

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


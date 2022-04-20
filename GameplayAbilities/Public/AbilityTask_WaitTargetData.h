#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask.h"
#include "WaitTargetDataDelegateDelegate.h"
#include "EGameplayTargetingConfirmation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayAbilityTargetDataHandle.h"
#include "AbilityTask_WaitTargetData.generated.h"

class AGameplayAbilityTargetActor;
class UAbilityTask_WaitTargetData;
class UGameplayAbility;

UCLASS(NotPlaceable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitTargetData : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitTargetDataDelegate ValidData;
    
    UPROPERTY(BlueprintAssignable)
    FWaitTargetDataDelegate Cancelled;
    
protected:
    UPROPERTY()
    TSubclassOf<AGameplayAbilityTargetActor> TargetClass;
    
    UPROPERTY()
    AGameplayAbilityTargetActor* TargetActor;
    
public:
    UAbilityTask_WaitTargetData();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, AGameplayAbilityTargetActor* NewTargetActor);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitTargetData* WaitTargetData(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, TSubclassOf<AGameplayAbilityTargetActor> Class);
    
    UFUNCTION()
    void OnTargetDataReplicatedCancelledCallback();
    
    UFUNCTION()
    void OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);
    
    UFUNCTION()
    void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data);
    
    UFUNCTION()
    void OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    bool BeginSpawningActor(UGameplayAbility* OwningAbility, TSubclassOf<AGameplayAbilityTargetActor> Class, AGameplayAbilityTargetActor*& SpawnedActor);
    
};


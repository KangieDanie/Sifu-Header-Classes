#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask.h"
#include "VisualizeTargetingDelegateDelegate.h"
#include "AbilityTask_VisualizeTargeting.generated.h"

class UAbilityTask_VisualizeTargeting;
class UGameplayAbility;
class AGameplayAbilityTargetActor;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_VisualizeTargeting : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FVisualizeTargetingDelegate TimeElapsed;
    
    UAbilityTask_VisualizeTargeting();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_VisualizeTargeting* VisualizeTargeting(UGameplayAbility* OwningAbility, TSubclassOf<AGameplayAbilityTargetActor> Class, FName TaskInstanceName, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    bool BeginSpawningActor(UGameplayAbility* OwningAbility, TSubclassOf<AGameplayAbilityTargetActor> Class, AGameplayAbilityTargetActor*& SpawnedActor);
    
};


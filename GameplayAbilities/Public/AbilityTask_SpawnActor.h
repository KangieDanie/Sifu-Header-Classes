#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask.h"
#include "SpawnActorDelegateDelegate.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "AbilityTask_SpawnActor.generated.h"

class UAbilityTask_SpawnActor;
class UGameplayAbility;
class AActor;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_SpawnActor : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnActorDelegate Success;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnActorDelegate DidNotSpawn;
    
    UAbilityTask_SpawnActor();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_SpawnActor* SpawnActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<AActor> Class);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, AActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    bool BeginSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<AActor> Class, AActor*& SpawnedActor);
    
};


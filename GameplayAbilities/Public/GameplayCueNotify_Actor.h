#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayCueParameters.h"
#include "EGameplayCueEvent.h"
#include "GameplayCueNotify_Actor.generated.h"

UCLASS()
class GAMEPLAYABILITIES_API AGameplayCueNotify_Actor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bAutoDestroyOnRemove;
    
    UPROPERTY(EditAnywhere)
    float AutoDestroyDelay;
    
    UPROPERTY(EditAnywhere)
    bool WarnIfTimelineIsStillRunning;
    
    UPROPERTY(EditAnywhere)
    bool WarnIfLatentActionIsStillRunning;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag GameplayCueTag;
    
    UPROPERTY(AssetRegistrySearchable)
    FName GameplayCueName;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAutoAttachToOwner;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsOverride;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUniqueInstancePerInstigator;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUniqueInstancePerSourceObject;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAllowMultipleOnActiveEvents;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAllowMultipleWhileActiveEvents;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NumPreallocatedInstances;
    
    AGameplayCueNotify_Actor();
    UFUNCTION(BlueprintNativeEvent)
    bool WhileActive(AActor* MyTarget, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintNativeEvent)
    bool OnRemove(AActor* MyTarget, const FGameplayCueParameters& Parameters);
    
    UFUNCTION()
    void OnOwnerDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintNativeEvent)
    bool OnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintNativeEvent)
    bool OnActive(AActor* MyTarget, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintCallable)
    void K2_EndGameplayCue();
    
};


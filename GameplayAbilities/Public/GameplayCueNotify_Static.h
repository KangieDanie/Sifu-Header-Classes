#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayCueParameters.h"
#include "EGameplayCueEvent.h"
#include "GameplayCueNotify_Static.generated.h"

class AActor;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UGameplayCueNotify_Static : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag GameplayCueTag;
    
    UPROPERTY(AssetRegistrySearchable)
    FName GameplayCueName;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsOverride;
    
    UGameplayCueNotify_Static();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool WhileActive(AActor* MyTarget, const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool OnRemove(AActor* MyTarget, const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool OnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool OnActive(AActor* MyTarget, const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters) const;
    
};


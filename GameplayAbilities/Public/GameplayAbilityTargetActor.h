#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameplayAbilityTargetingLocationInfo.h"
#include "GameplayTargetDataFilterHandle.h"
#include "WorldReticleParameters.h"
#include "GameplayAbilityTargetActor.generated.h"

class UAbilitySystemComponent;
class APlayerController;
class UGameplayAbility;
class AGameplayAbilityWorldReticle;

UCLASS(Abstract, NotPlaceable)
class GAMEPLAYABILITIES_API AGameplayAbilityTargetActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool ShouldProduceTargetDataOnServer;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FGameplayAbilityTargetingLocationInfo StartLocation;
    
    UPROPERTY(BlueprintReadOnly)
    APlayerController* MasterPC;
    
    UPROPERTY()
    UGameplayAbility* OwningAbility;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool bDestroyOnConfirmation;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite)
    FWorldReticleParameters ReticleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AGameplayAbilityWorldReticle> ReticleClass;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    FGameplayTargetDataFilterHandle Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool bDebug;
    
    UPROPERTY(Export)
    UAbilitySystemComponent* GenericDelegateBoundASC;
    
    AGameplayAbilityTargetActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void ConfirmTargeting();
    
    UFUNCTION()
    void CancelTargeting();
    
};


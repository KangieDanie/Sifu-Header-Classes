#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WorldReticleParameters.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GameplayAbilityWorldReticle.generated.h"

class APlayerController;

UCLASS(NotPlaceable)
class GAMEPLAYABILITIES_API AGameplayAbilityWorldReticle : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FWorldReticleParameters Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFaceOwnerFlat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSnapToTargetedActor;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    bool bIsTargetValid;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsTargetAnActor;
    
    UPROPERTY(BlueprintReadOnly)
    APlayerController* MasterPC;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* TargetingActor;
    
public:
    AGameplayAbilityWorldReticle();
    UFUNCTION(BlueprintImplementableEvent)
    void SetReticleMaterialParamVector(FName ParamName, FVector Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetReticleMaterialParamFloat(FName ParamName, float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnValidTargetChanged(bool bNewValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetingAnActor(bool bNewValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnParametersInitialized();
    
    UFUNCTION(BlueprintCallable)
    void FaceTowardSource(bool bFaceIn2D);
    
};


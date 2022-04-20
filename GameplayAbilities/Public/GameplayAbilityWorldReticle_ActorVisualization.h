#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityWorldReticle.h"
#include "GameplayAbilityWorldReticle_ActorVisualization.generated.h"

class UCapsuleComponent;
class UActorComponent;

UCLASS()
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UCapsuleComponent* CollisionComponent;
    
public:
    UPROPERTY(Export)
    TArray<UActorComponent*> VisualizationComponents;
    
    AGameplayAbilityWorldReticle_ActorVisualization();
};


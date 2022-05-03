#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCPoolableActor -FallbackName=SCPoolableActor
#include "FightingAIController.generated.h"

class AActor;
class AAISpawner;

UCLASS()
class SIFU_API AFightingAIController : public AAIController, public ISCPoolableActor {
    GENERATED_BODY()
public:
    AFightingAIController();
private:
    UFUNCTION()
    void OnPerceptionUpdate(const TArray<AActor*>& _updatedActors);
    
    UFUNCTION()
    void AiSpawned(AAISpawner* _spawner);
    
    
    // Fix for true pure virtual functions not being implemented
};


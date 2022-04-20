#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetActor_GroundTrace.h"
#include "GameplayAbilityTargetActor_ActorPlacement.generated.h"

class UMaterialInterface;

UCLASS()
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* PlacedActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* PlacedActorMaterial;
    
    AGameplayAbilityTargetActor_ActorPlacement();
};


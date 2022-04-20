#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetActor_Trace.h"
#include "GameplayAbilityTargetActor_GroundTrace.generated.h"

UCLASS()
class GAMEPLAYABILITIES_API AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CollisionHeight;
    
    AGameplayAbilityTargetActor_GroundTrace();
};


#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetActor.h"
#include "GameplayAbilityTargetActor_Radius.generated.h"

UCLASS()
class GAMEPLAYABILITIES_API AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    AGameplayAbilityTargetActor_Radius();
};


#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionProfileName -FallbackName=CollisionProfileName
#include "GameplayAbilityTargetActor_Trace.generated.h"

UCLASS(Abstract, Config=Game)
class GAMEPLAYABILITIES_API AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FCollisionProfileName TraceProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTraceAffectsAimPitch;
    
    AGameplayAbilityTargetActor_Trace();
};


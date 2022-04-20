#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Static.h"
#include "GameplayCueNotify_HitImpact.generated.h"

class USoundBase;
class UParticleSystem;

UCLASS()
class GAMEPLAYABILITIES_API UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* ParticleSystem;
    
    UGameplayCueNotify_HitImpact();
};


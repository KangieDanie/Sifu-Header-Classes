#pragma once
#include "CoreMinimal.h"
#include "HitDescription.h"
#include "NetOrderStructAttackEnv.h"
#include "NetOrderStructParried.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructParried : public FNetOrderStructAttackEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FHitDescription m_AttackHitDescription;
    
    SIFU_API FNetOrderStructParried();
};


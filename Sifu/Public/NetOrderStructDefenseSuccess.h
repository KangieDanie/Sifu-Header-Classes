#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
#include "ImpactResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "HitRequest.h"
#include "NetOrderStructDefenseSuccess.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructDefenseSuccess : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FHitResult m_Hit;
    
    UPROPERTY(BlueprintReadOnly)
    FImpactResult m_Impact;
    
    UPROPERTY(BlueprintReadOnly)
    FHitRequest m_Request;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_OpponentGoingStructureBroken;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bReorientToAttacker;
    
    SIFU_API FNetOrderStructDefenseSuccess();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "NetOrderStructPlayAnim.h"
#include "HitRequest.h"
#include "ImpactResult.h"
#include "HittedAnimContainer.h"
#include "NetOrderStructHitted.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructHitted : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FHitRequest m_Request;
    
    UPROPERTY(BlueprintReadOnly)
    FImpactResult m_ImpactResult;
    
    UPROPERTY(BlueprintReadOnly)
    FHitResult m_HitResult;
    
    UPROPERTY(BlueprintReadOnly)
    FHittedAnimContainer m_HittedAnimContainer;
    
    SIFU_API FNetOrderStructHitted();
};


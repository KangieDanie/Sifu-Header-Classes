#pragma once
#include "CoreMinimal.h"
#include "HitRequest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ImpactResult.h"
#include "HitDescription.generated.h"

USTRUCT(BlueprintType)
struct FHitDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FHitRequest m_Request;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FHitResult m_Result;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FImpactResult m_ImpactResult;
    
    SIFU_API FHitDescription();
};


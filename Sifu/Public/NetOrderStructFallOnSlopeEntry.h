#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
#include "FallOnSlopeSetup.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HitRequest.h"
#include "NetOrderStructFallOnSlopeEntry.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FNetOrderStructFallOnSlopeEntry : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FFallOnSlopeSetup m_Setup;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_vSlopeDir;
    
    UPROPERTY(BlueprintReadOnly)
    FHitRequest m_HitRequest;
    
    FNetOrderStructFallOnSlopeEntry();
};


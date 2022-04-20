#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NetOrderStructFallFromPush.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructFallFromPush : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector m_vDirection;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bLethal;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bFromSlope;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_vSlopeNormal;
    
    SIFU_API FNetOrderStructFallFromPush();
};


#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NetOrderStructDash.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructDash : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector m_vDirection;
    
    SIFU_API FNetOrderStructDash();
};


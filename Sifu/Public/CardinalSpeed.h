#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "CardinalSpeed.generated.h"

USTRUCT(BlueprintType)
struct FCardinalSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bUseCommonSpeed;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_CommonSpeed;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_CardinalSpeeds[4];
    
    SIFU_API FCardinalSpeed();
};


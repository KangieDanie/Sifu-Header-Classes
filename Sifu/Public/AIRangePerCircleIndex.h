#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "AIRangePerCircleIndex.generated.h"

USTRUCT(BlueprintType)
struct FAIRangePerCircleIndex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<int32, FFloatRange> m_RangePerCircle;
    
    SIFU_API FAIRangePerCircleIndex();
};


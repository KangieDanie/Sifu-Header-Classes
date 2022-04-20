#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "FrameRange.generated.h"

USTRUCT(BlueprintType)
struct FFrameRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRange m_Anim;
    
    SIFU_API FFrameRange();
};


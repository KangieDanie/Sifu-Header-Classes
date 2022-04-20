#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "GameOptionMappingRange.generated.h"

USTRUCT(BlueprintType)
struct FGameOptionMappingRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FFloatRange m_Range;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDefaultValue;
    
    SIFU_API FGameOptionMappingRange();
};


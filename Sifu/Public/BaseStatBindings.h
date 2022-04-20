#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "BaseStatBindings.generated.h"

USTRUCT(BlueprintType)
struct FBaseStatBindings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FText m_Text;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSlateColor m_ComparisonColor;
    
    SIFU_API FBaseStatBindings();
};


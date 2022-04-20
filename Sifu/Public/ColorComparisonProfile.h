#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "ColorComparisonProfile.generated.h"

UCLASS(BlueprintType)
class SIFU_API UColorComparisonProfile : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_BonusTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_MalusTint;
    
    UColorComparisonProfile();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ScaleBoxSlot -FallbackName=ScaleBoxSlot
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EVerticalAlignment -FallbackName=EVerticalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
#include "PerPlatformScaleBoxSlot.generated.h"

UCLASS()
class UPerPlatformScaleBoxSlot : public UScaleBoxSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin NormalPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin SmallScreenPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> NormalHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> SmallScreenHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> NormalVerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> SmallScreenVerticalAlignment;
    
    UPerPlatformScaleBoxSlot();
};


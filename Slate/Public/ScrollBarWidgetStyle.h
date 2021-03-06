#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ScrollBarStyle -FallbackName=ScrollBarStyle
#include "ScrollBarWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FScrollBarStyle ScrollBarStyle;
    
    UScrollBarWidgetStyle();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=PanelWidget -FallbackName=PanelWidget
#include "PerPlatformWidget.h"
#include "PerPlatformWidgetLoader.generated.h"

UCLASS()
class UPerPlatformWidgetLoader : public UPanelWidget, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPerPlatformWidgetLoader();
    
    // Fix for true pure virtual functions not being implemented
};


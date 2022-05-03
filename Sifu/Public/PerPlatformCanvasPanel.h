#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=CanvasPanel -FallbackName=CanvasPanel
#include "PerPlatformWidget.h"
#include "PerPlatformCanvasPanel.generated.h"

UCLASS()
class UPerPlatformCanvasPanel : public UCanvasPanel, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPerPlatformCanvasPanel();
    
    // Fix for true pure virtual functions not being implemented
};


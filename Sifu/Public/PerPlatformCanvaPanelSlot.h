#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=CanvasPanelSlot -FallbackName=CanvasPanelSlot
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=AnchorData -FallbackName=AnchorData
#include "PerPlatformCanvaPanelSlot.generated.h"

UCLASS()
class UPerPlatformCanvaPanelSlot : public UCanvasPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnchorData NormalLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnchorData SmallScreenLayoutData;
    
    UPerPlatformCanvaPanelSlot();
};


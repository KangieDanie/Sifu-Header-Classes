#pragma once
#include "CoreMinimal.h"
#include "OverlayItem.h"
#include "Overlays.h"
#include "BasicOverlays.generated.h"

UCLASS()
class OVERLAY_API UBasicOverlays : public UOverlays {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FOverlayItem> Overlays;
    
    UBasicOverlays();
};


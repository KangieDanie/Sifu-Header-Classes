#pragma once
#include "CoreMinimal.h"
#include "EWidgetPlatform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetSwitcherSlot -FallbackName=WidgetSwitcherSlot
#include "PerPlatformWidgetLoaderSlot.generated.h"

UCLASS()
class UPerPlatformWidgetLoaderSlot : public UWidgetSwitcherSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EWidgetPlatform Platform;
    
    UPerPlatformWidgetLoaderSlot();
};


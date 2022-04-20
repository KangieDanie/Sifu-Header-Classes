#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EOSWidgetDelegateDelegate.h"
#include "EOSSubsystem.generated.h"

UCLASS()
class ONLINESUBSYSTEMREDPOINTEOS_API UEOSSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEOSWidgetDelegate OnAddWidgetToViewport;
    
    UPROPERTY(BlueprintAssignable)
    FEOSWidgetDelegate OnRemoveWidgetFromViewport;
    
    UEOSSubsystem();
};


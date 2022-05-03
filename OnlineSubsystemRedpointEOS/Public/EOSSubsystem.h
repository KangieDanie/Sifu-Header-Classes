#pragma once
#include "CoreMinimal.h"
#include "EOSWidgetDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
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


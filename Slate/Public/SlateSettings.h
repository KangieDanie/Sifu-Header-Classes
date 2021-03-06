#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SlateSettings.generated.h"

UCLASS(DefaultConfig)
class SLATE_API USlateSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bExplicitCanvasChildZOrder;
    
    USlateSettings();
};


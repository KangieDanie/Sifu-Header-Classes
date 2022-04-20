#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSettings -FallbackName=WorldSettings
#include "SCWorldSettings.generated.h"

UCLASS()
class SCCORE_API ASCWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bUseLegacyCollisionSystem;
    
public:
    ASCWorldSettings();
};


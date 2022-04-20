#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ESCOcclusionMode.h"
#include "SCSoundOcclusionSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class SCSOUNDOCCLUSION_API USCSoundOcclusionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float m_fMaxPathDist;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fMaxPathFactor;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_RTPCOcclusionName;
    
    UPROPERTY(Config, EditAnywhere)
    ESCOcclusionMode m_eOcclusionMode;
    
    USCSoundOcclusionSettings();
};


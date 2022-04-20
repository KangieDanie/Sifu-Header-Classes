#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "SCVisualLoggerSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class SCCORE_API USCVisualLoggerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSet<FName> m_SetAllowDebugBones;
    
    UPROPERTY(Config, EditAnywhere)
    TSet<FName> m_SetAllowDebugBonesDrawTransform;
    
    UPROPERTY(Config, EditAnywhere)
    FKey m_SnapshotKey;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fAIMaxDistance;
    
    USCVisualLoggerSettings();
};


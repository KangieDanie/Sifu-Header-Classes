#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ESCDebugActorBoxType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "SCCoreUserSettings.generated.h"

UCLASS(Config=User)
class SCCORE_API USCCoreUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool m_bEnableGameFlowInPIE;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bEnableSaveLevelInPIE;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bAutoSkipCutscenes;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bEnableVolumeSolidDraw;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bPauseOnAiNextAction;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bListPoolableActorsInOutliner;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bAutoGenerateActorPools;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bDebugDisplayAllPools;
    
    UPROPERTY(Config, EditAnywhere)
    ESCDebugActorBoxType m_eDebugActorSelectionBoxType;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath m_PhonemeDictionaryPath;
    
    USCCoreUserSettings();
};


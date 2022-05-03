#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SCGameFlowData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SCVolumeClusterMaterialsPath.h"
#include "ActorsPoolConfig.h"
#include "SCErrorPopup.h"
#include "SCCoreSettings.generated.h"

class ASCSequenceAnchor;
class USCBaseGameSettings;
class ASCCharacterImpostor;
class UGameFlow;
class USCLevelSequenceDirectorData;
class USCInGameAchievementsManagerSettings;
class USCAiAction;
class AActor;

UCLASS(DefaultConfig, Config=SCCore)
class SCCORE_API USCCoreSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<USCBaseGameSettings> m_GameSettingsClass;
    
    UPROPERTY(Config, EditAnywhere)
    FSCGameFlowData m_GameFlow;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UGameFlow> m_playingGameFlow;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<USCInGameAchievementsManagerSettings> m_achievementsSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FSCVolumeClusterMaterialsPath m_DefaultVolumeVisualizerMaterial;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, FSCVolumeClusterMaterialsPath> m_VolumeVisualizerMaterialsMap;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<ASCSequenceAnchor> m_LevelSequenceAnchorClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<USCLevelSequenceDirectorData> m_LevelSequenceDefaultDirectorData;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fLevelSequenceForcedClothSimulationDuration;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FActorsPoolConfig> m_DefaultActorPools;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTag m_AiActionBehaviorTag;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTag m_AiAttackActionBehaviorTag;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FGameplayTag> m_AiAttackSubActionBehaviorTags;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, TSubclassOf<USCAiAction>> m_DevDefinedAiActionsMap;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> m_StreamingDebugTrackedActors;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bSaveStreamingActors;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_iMaxActorsAllowedPerLevelWithTransform;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<ASCCharacterImpostor> m_DefaultCharacterImpostorClass;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bIsLowEndPlatform;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FText> m_IsoCultureToDisplayName;
    
    UPROPERTY(Config, EditAnywhere)
    FSCErrorPopup m_GenericErrorPopupTexts[10];
    
    UPROPERTY(Config, EditAnywhere)
    FSCErrorPopup m_GenericErrorTexts[6];
    
private:
    UPROPERTY(Config, EditAnywhere)
    bool m_bActorPoolsEnabled;
    
public:
    USCCoreSettings();
};


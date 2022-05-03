#pragma once
#include "CoreMinimal.h"
#include "ReplayKeyDataCameraSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "SCReplaySettings.generated.h"

class ABaseReplayController;

UCLASS(BlueprintType, DefaultConfig, Config=Replay)
class SIFU_API USCReplaySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<ABaseReplayController> m_PhotoModeGameplayControllerClass;
    
    UPROPERTY(Config, EditAnywhere)
    FString m_ScreenShotFileName;
    
    UPROPERTY(Config, EditAnywhere)
    FString m_ScreenShotDateFormat;
    
protected:
    UPROPERTY(Config, EditAnywhere)
    FReplayKeyDataCameraSettings m_DefaultCameraSettings;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bReplayEditorBuildEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bPhotomodeBuildEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FText> m_LocalizedMapName;
    
    UPROPERTY(Config, EditAnywhere)
    FFloatRange m_ReplayRecordingTimeRange;
    
public:
    USCReplaySettings();
    UFUNCTION(BlueprintCallable)
    static bool BPF_LocalizeMapName(UPARAM(Ref) FString& _inOutMapName);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsReplayEditorEnabled();
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsPhotomodeEnabled();
    
    UFUNCTION(BlueprintPure)
    static FFloatRange BPF_GetReplayRecordingTimeRangeMS();
    
    UFUNCTION(BlueprintPure)
    static FReplayKeyDataCameraSettings BPF_GetDefaultCameraSettings();
    
};


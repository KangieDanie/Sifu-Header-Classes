#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnReplayGoToTimeDelegate.h"
#include "BaseReplayController.h"
#include "ReplayTimelineControllerData.h"
#include "OnReplayCameraModeChangedDelegate.h"
#include "EReplayKeyTransition.h"
#include "EReplayCameraMode.h"
#include "ReplayVideoRecorderCreatedDelegateDelegate.h"
#include "ReplayController.generated.h"

class UReplaySystem;
class UCurveFloat;
class UReplayTimelineController;
class AActor;
class UReplayLoadingScreenWidget;
class UReplayMainUserWidget;
class AReplayVideoRecorder;
class UReplayKey;
class UReplayTimelineModel;
class UReplayFightingCharacterComponent;
class UObject;
class AReplayingCamera;
class UReplayCineCameraComponent;

UCLASS()
class SIFU_API AReplayController : public ABaseReplayController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FReplayTimelineControllerData m_TimelineControllerData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UReplayTimelineController* m_TimelineController;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fGoToTimeCompletedTimeS;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bTimeDilationZeroedOnGoToTime;
    
    UPROPERTY(BlueprintAssignable)
    FOnReplayCameraModeChanged m_OnCameraModeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnReplayGoToTime m_OnGoToTimeInitiated;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugEnabled;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EReplayKeyTransition, UCurveFloat*> m_TransitionProfiles;
    
    UPROPERTY(BlueprintReadWrite)
    EReplayCameraMode m_eCurrentCameraMode;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> m_VirtualCameraClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UReplayLoadingScreenWidget> m_LoadingScreenWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UReplayMainUserWidget* m_MainUserWidget;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UReplayLoadingScreenWidget* m_LoadingScreenWidgetInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* m_VirtualCamera;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AReplayVideoRecorder> m_VideoRecorderClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AReplayVideoRecorder* m_VideoRecorder;
    
public:
    AReplayController();
protected:
    UFUNCTION()
    void OnKeysLoaded();
    
    UFUNCTION()
    void OnKeyMoved(UReplayKey* _key);
    
    UFUNCTION()
    void OnGoToTimeCompleted();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsReplaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsRecording();
    
    UFUNCTION(BlueprintCallable)
    void GotoTimeInSeconds(float _fTime, bool _bUnselectKey);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_StopVideoRecording();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartVideoRecording(FReplayVideoRecorderCreatedDelegate _onVideoRecorderCreated);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_StartSkipTimeToNextKeyFrameTask();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDemoPlayTimeDilation(float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCameraMode(EReplayCameraMode _eCameraMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_ResetPreviousTimeDilation() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_LeaveReplay();
    
protected:
    UFUNCTION(BlueprintPure)
    bool BPF_IsRecordingVideo() const;
    
public:
    UFUNCTION(BlueprintPure)
    UCurveFloat* BPF_GetTransitionProfile(EReplayKeyTransition _eTransitionType) const;
    
    UFUNCTION(BlueprintPure)
    UReplayTimelineModel* BPF_GetTimelineModel() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float BPF_GetReplayTimeFromOffsetS(float _fOffset);
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetReplayTimeFromOffsetMS(float _fOffset);
    
    UFUNCTION(BlueprintCallable)
    UReplaySystem* BPF_GetReplaySystem();
    
public:
    UFUNCTION(BlueprintPure)
    UReplayFightingCharacterComponent* BPF_GetReplayFightingCharacterComponent(const UObject* _worldContextObject) const;
    
    UFUNCTION(BlueprintPure)
    AReplayingCamera* BPF_GetReplayFightingCharacterCameraDummy(const UObject* _worldContextObject) const;
    
    UFUNCTION(BlueprintPure)
    UReplayCineCameraComponent* BPF_GetCurrentCineCameraComponent() const;
    
    UFUNCTION(BlueprintPure)
    UReplayCineCameraComponent* BPF_GetCineCameraComponent(EReplayCameraMode _eCameraMode) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnReplayCameraModeChanged(EReplayCameraMode _eCameraMode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPlayingBeginPlay();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnKeyRemoved(UReplayKey* _key);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnGoToTimeCompleted();
    
};


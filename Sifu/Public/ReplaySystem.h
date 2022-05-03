#pragma once
#include "CoreMinimal.h"
#include "ReplayFeedbackEventSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnRecordingCompleteDelegate.h"
#include "OnReplayRecordingChangedDelegate.h"
#include "ReplaySystem.generated.h"

class UReplayManagement;
class UThePlainesGameInstance;
class AFightingCharacter;
class UReplaySystem;
class AReplayController;
class UDemoNetDriver;
class AActor;

UCLASS(BlueprintType, Config=Replay)
class SIFU_API UReplaySystem : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FOnRecordingComplete m_OnRecordingStreamingCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnReplayRecordingChanged m_OnRecordingChanged;
    
    UPROPERTY(BlueprintAssignable)
    FReplayFeedbackEventSignature m_OnReplayFeedbackEvent;
    
    UPROPERTY(Config)
    bool m_bTimeDilationReplicated;
    
    UPROPERTY(Config)
    bool m_bPauserPlayerStateReplicated;
    
    UPROPERTY(Transient)
    UThePlainesGameInstance* m_GameInstance;
    
    UPROPERTY(Transient)
    UReplayManagement* m_ReplayManagement;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fReplayStartVislogTimeS;
    
public:
    UReplaySystem();
    UFUNCTION(BlueprintCallable)
    void BPF_StopRecording();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartReplay(const FString& _replayID);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartRecording();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetPlayingPlayerCharacter(AFightingCharacter* _character, const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResumeRecording();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ReplayStopRecording(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ReplayStartRecording(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ReplayStartPlaying(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_PushPopDisableRecording(UPARAM(Ref) int32& _iInOutTag, const FString& _context, const bool _bPush, const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PauseRecording();
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsRecording(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsPlaying(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsDemoPlayPaused(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    float BPF_GetVislogGameplayTimeS() const;
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetSnappedDemoTime(float _fDemoTimeS, bool _bCheckClosestFrame);
    
    UFUNCTION(BlueprintPure)
    static UReplaySystem* BPF_GetReplaySystem(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UReplayManagement* BPF_GetReplayManagement(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static AReplayController* BPF_GetReplayController(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static AFightingCharacter* BPF_GetPlayingPlayerCharacter(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 BPF_GetKeyFrameIndexFromDemoTime(float _fDemoTimeS, bool _bCheckClosestFrame);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetDemoTimeFromKeyFrameIndex(int32 _iKeyFrameIndex);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetDemoPlayTimeDilation(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UDemoNetDriver* BPF_GetDemoNetDriver(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetCurrentReplayLengthS(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetCurrentReplayLengthMS(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetCurrentDemoTimeS(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetActorLastReplicationTime(AActor* _actor);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_CanStartRecording(const UObject* _worldContextObject);
    
};


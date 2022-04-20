#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnRecordingCompleteDelegate.h"
#include "ReplaySystem.generated.h"

class AActor;
class UThePlainesGameInstance;
class AFightingCharacter;
class UReplaySystem;
class AReplayController;
class UDemoNetDriver;

UCLASS(BlueprintType, Config=Replay)
class SIFU_API UReplaySystem : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FOnRecordingComplete m_OnRecordingStreamingCompleted;
    
    UPROPERTY(Config)
    bool m_bTimeDilationReplicated;
    
    UPROPERTY(Config)
    bool m_bPauserPlayerStateReplicated;
    
    UPROPERTY()
    UThePlainesGameInstance* m_GameInstance;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fReplayStartVislogTimeS;
    
public:
    UReplaySystem();
    UFUNCTION(BlueprintCallable)
    void BPF_StopRecording();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartReplay();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartRecording();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetPlayingPlayerCharacter(AFightingCharacter* _character, const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SaveReplayToGameSlot();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResumeRecording();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ReplayStopRecording(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ReplayStartRecording(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ReplayStartPlaying(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ReadReplayFromGameSlot();
    
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
    
};


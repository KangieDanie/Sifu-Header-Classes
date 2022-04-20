#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VideoRecordEventDelegate.h"
#include "ReplayVideoRecorder.generated.h"

class UWorld;

UCLASS()
class SIFU_API AReplayVideoRecorder : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FVideoRecordEvent m_OnVideoRecordingComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FVideoRecordEvent m_OnVideoRecordingStarted;
    
public:
    AReplayVideoRecorder();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveReplaySystemListeners();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_StartRecordingVideo();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPlayBackCompleted(UWorld* _world);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnGoToTimeCompleted();
    
};


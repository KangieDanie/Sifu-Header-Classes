#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SpeakingNotifyDelegate.h"
#include "SpeakingEventDelegate.h"
#include "SpeakingEventBoolDelegate.h"
#include "LipSync_TimedPhrase.h"
#include "LipsyncData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=EPhoneme -FallbackName=EPhoneme
#include "TextLipSync.generated.h"

class ULipSyncDB;
class USkeletalMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEXT2LIPSYNC_API UTextLipSync : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ULipSyncDB* m_LipSyncDB;
    
    UPROPERTY(BlueprintAssignable)
    FSpeakingNotify OnNotifyExecuted;
    
    UPROPERTY(BlueprintAssignable)
    FSpeakingEvent OnPlayingFinished;
    
    UPROPERTY(BlueprintAssignable)
    FSpeakingEventBool OnSpeakingPause;
    
    UPROPERTY(BlueprintAssignable)
    FSpeakingEvent OnTimelineChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    USkeletalMeshComponent* ControlledMesh;
    
    UPROPERTY()
    FName MorphTargets[17];
    
    UPROPERTY()
    TMap<FName, float> MorphTargetRuntimeValue;
    
    UPROPERTY()
    TSet<FName> MorphTargetsList;
    
    UPROPERTY()
    bool bIsInitialized;
    
    UPROPERTY()
    bool bIsSpeaking;
    
    UPROPERTY()
    bool bIsSpeakingPhonemeInAudio;
    
    UPROPERTY()
    bool bSubtitleWasChanged;
    
    UPROPERTY()
    float PauseTime;
    
    UPROPERTY()
    float CurrentTime;
    
    UPROPERTY()
    float EnvelopeVolumeMultiplier;
    
    UPROPERTY()
    float PhraseDuration;
    
    UPROPERTY()
    int32 PreviousPhonemeIndex;
    
    UPROPERTY()
    int32 CurrentPhonemeIndex;
    
    UPROPERTY()
    int32 NextNotifyIndex;
    
    UPROPERTY()
    TArray<FLipSync_TimedPhrase> PhraseData;
    
    UPROPERTY()
    TArray<int32> PauseIndexes;
    
    UPROPERTY()
    TArray<FLipSync_TimedPhrase> PhraseNotifies;
    
    UPROPERTY()
    float CurrentIntervalDuration;
    
public:
    UTextLipSync();
    UFUNCTION(BlueprintCallable)
    bool StopSpeaking(bool bStopPlayingSound);
    
    UFUNCTION()
    bool Speak(const FLipsyncData& _lipsyncData, float _fDuration, bool _bUseImprovedTextToPhoneme);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSingleAnimationValue(const FName& _targetName, float _fValue);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSpeaking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInitialized() const;
    
protected:
    UFUNCTION()
    void InitializePhonemesArray();
    
public:
    UFUNCTION(BlueprintPure)
    float GetSpeakingTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastPhraseDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurveValue(const FName& CurveName) const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentPhrase(TMap<float, EPhoneme>& ReturnValue) const;
    
    UFUNCTION(BlueprintPure)
    FString GetCurrentPhonemesLine() const;
    
    UFUNCTION(BlueprintPure)
    FString GetActiveMorphTargets() const;
    
protected:
    UFUNCTION()
    void BuildPhraseData(const FLipsyncData& _lipsyncData);
    
};


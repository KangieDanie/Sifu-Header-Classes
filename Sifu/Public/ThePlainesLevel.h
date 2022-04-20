#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCLevelScriptActor -FallbackName=SCLevelScriptActor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "SoundStateInfo.h"
#include "AIPhaseTransitionData.h"
#include "ThePlainesLevel.generated.h"

class AActor;
class ASCBlenderManager;
class AFightingCharacter;
class ULevelSequence;
class UAkAudioBank;

UCLASS()
class SIFU_API AThePlainesLevel : public ASCLevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASCBlenderManager* m_BlenderManager;
    
    UPROPERTY(EditDefaultsOnly)
    ULevelSequence* m_StartupSequence;
    
private:
    UPROPERTY(EditAnywhere)
    bool m_bInChargeOfSoundSave;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UAkAudioBank*> m_AudioBanksToLoad;
    
    UPROPERTY(SaveGame)
    TMap<uint32, FSoundStateInfo> m_AKStateGroupValues;
    
    UPROPERTY(SaveGame)
    TArray<UAkAudioBank*> m_SavedSoundBanksToLoad;
    
public:
    AThePlainesLevel();
private:
    UFUNCTION()
    void UnregisterFromSignificanceOnActorEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
protected:
    UFUNCTION(BlueprintPure)
    bool BPF_IsSoundStateContainedInSaved(const FString& _SoundState) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_InitSoundState(const FString& _StateGroup, const FString& _state, bool _bReplicates, bool _bSaveGame);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnStartAIPhaseChanged(AFightingCharacter* _fightingChar, const FAIPhaseTransitionData& _phaseTransition);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnLevelTransition(int32 _iTransitionIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnEndAIPhaseChanged(AFightingCharacter* _fightingChar, int32 _iPreviousPhaseIndex, int32 _iCurrentPhaseIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAppliedSoundStateFromSave();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_AllSoundBanksLoaded();
    
};


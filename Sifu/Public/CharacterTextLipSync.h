#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Text2LipSync -ObjectName=LipSync_TimedData -FallbackName=LipSync_TimedData
//CROSS-MODULE INCLUDE V2: -ModuleName=Text2LipSync -ObjectName=TextLipSync -FallbackName=TextLipSync
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=LipSyncEmotionData -FallbackName=LipSyncEmotionData
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCPoolableActorComponent -FallbackName=SCPoolableActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=LipSyncPhonemeInPhrase -FallbackName=LipSyncPhonemeInPhrase
#include "CharacterTextLipSync.generated.h"

class UAkAudioEvent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UCharacterTextLipSync : public UTextLipSync, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UCharacterTextLipSync();
    UFUNCTION(BlueprintCallable)
    void BPF_Speak(const FLipSync_TimedData& _phrase, const TArray<FLipSyncPhonemeInPhrase>& _phonemes, const TArray<FLipSyncEmotionData>& _emotions, UAkAudioEvent* _audioEvent, TMap<float, float> _enveloppeValueByTime, bool _bUseImprovedTextToPhoneme);
    
    
    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "OnSynthEnvelopeValueDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundAttenuationSettings -FallbackName=SoundAttenuationSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundSubmixSendInfo -FallbackName=SoundSubmixSendInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundSourceBusSendInfo -FallbackName=SoundSourceBusSendInfo
#include "SynthComponent.generated.h"

class USoundSubmixBase;
class USoundAttenuation;
class USoundClass;
class USoundConcurrency;
class USoundEffectSourcePresetChain;
class USynthSound;
class UAudioComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUDIOMIXER_API USynthComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bAutoDestroy: 1;
    
    UPROPERTY()
    uint8 bStopWhenOwnerDestroyed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowSpatialization: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideAttenuation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOutputToBusOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundAttenuationSettings AttenuationOverrides;
    
    UPROPERTY()
    USoundConcurrency* ConcurrencySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<USoundConcurrency*> ConcurrencySet;
    
    UPROPERTY(EditAnywhere)
    USoundClass* SoundClass;
    
    UPROPERTY(EditAnywhere)
    USoundEffectSourcePresetChain* SourceEffectChain;
    
    UPROPERTY(EditAnywhere)
    USoundSubmixBase* SoundSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSoundSubmixSendInfo> SoundSubmixSends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSoundSourceBusSendInfo> BusSends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSoundSourceBusSendInfo> PreEffectBusSends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsUISound: 1;
    
    UPROPERTY()
    uint8 bIsPreviewSound: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnvelopeFollowerAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnvelopeFollowerReleaseTime;
    
    UPROPERTY(BlueprintAssignable)
    FOnSynthEnvelopeValue OnAudioEnvelopeValue;
    
private:
    UPROPERTY(Transient)
    USynthSound* Synth;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* AudioComponent;
    
public:
    USynthComponent();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetVolumeMultiplier(float VolumeMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
    
    UFUNCTION(BlueprintCallable)
    void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
};


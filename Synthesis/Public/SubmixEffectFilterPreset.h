#pragma once
#include "CoreMinimal.h"
#include "ESubmixFilterAlgorithm.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "ESubmixFilterType.h"
#include "SubmixEffectFilterSettings.h"
#include "SubmixEffectFilterPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USubmixEffectFilterPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubmixEffectFilterSettings Settings;
    
    USubmixEffectFilterPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectFilterSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterType(ESubmixFilterType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterQMod(float InQ);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterQ(float InQ);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterCutoffFrequencyMod(float InFrequency);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterCutoffFrequency(float InFrequency);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);
    
};


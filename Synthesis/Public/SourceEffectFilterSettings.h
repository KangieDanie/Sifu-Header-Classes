#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectFilterCircuit.h"
#include "ESourceEffectFilterType.h"
#include "SourceEffectFilterAudioBusModulationSettings.h"
#include "SourceEffectFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESourceEffectFilterCircuit FilterCircuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESourceEffectFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CutoffFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FilterQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;
    
    FSourceEffectFilterSettings();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AudioOutput.h"
#include "EAudioOutputType.h"
#include "SoundSettingsHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API USoundSettingsHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USoundSettingsHelper();
    UFUNCTION(BlueprintPure)
    static FAudioOutput BPF_GetAudioOuputFromType(EAudioOutputType _eType, bool& _bOutFound);
    
};


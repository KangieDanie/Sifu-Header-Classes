#pragma once
#include "CoreMinimal.h"
#include "SourceEffectFilterSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectFilterPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectFilterPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectFilterSettings Settings;
    
    USourceEffectFilterPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectFilterSettings& InSettings);
    
};


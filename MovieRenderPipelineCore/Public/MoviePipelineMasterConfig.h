#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineConfigBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "MoviePipelineMasterConfig.generated.h"

class UMoviePipelineShotConfig;
class UMoviePipelineOutputSetting;
class UMoviePipelineSetting;
class ULevelSequence;

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelineMasterConfig : public UMoviePipelineConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TMap<FString, UMoviePipelineShotConfig*> PerShotConfigMapping;
    
private:
    UPROPERTY(Instanced)
    UMoviePipelineOutputSetting* OutputSetting;
    
    UPROPERTY(Transient)
    TArray<UMoviePipelineSetting*> TransientSettings;
    
public:
    UMoviePipelineMasterConfig();
    UFUNCTION(BlueprintCallable)
    void InitializeTransientSettings();
    
    UFUNCTION(BlueprintPure)
    TArray<UMoviePipelineSetting*> GetTransientSettings() const;
    
    UFUNCTION(BlueprintPure)
    FFrameRate GetEffectiveFrameRate(const ULevelSequence* InSequence) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMoviePipelineSetting*> GetAllSettings(const bool bIncludeDisabledSettings, const bool bIncludeTransientSettings) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MoviePipelineConfigBase.generated.h"

class UMoviePipelineSetting;
class UMoviePipelineConfigBase;

UCLASS(Abstract, BlueprintType)
class MOVIERENDERPIPELINECORE_API UMoviePipelineConfigBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString DisplayName;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    TArray<UMoviePipelineSetting*> Settings;
    
public:
    UMoviePipelineConfigBase();
    UFUNCTION(BlueprintCallable)
    void RemoveSetting(UMoviePipelineSetting* InSetting);
    
    UFUNCTION(BlueprintPure)
    TArray<UMoviePipelineSetting*> GetUserSettings() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMoviePipelineSetting*> FindSettingsByClass(TSubclassOf<UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings) const;
    
    UFUNCTION(BlueprintPure)
    UMoviePipelineSetting* FindSettingByClass(TSubclassOf<UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings) const;
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineSetting* FindOrAddSettingByClass(TSubclassOf<UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings);
    
    UFUNCTION(BlueprintCallable)
    void CopyFrom(UMoviePipelineConfigBase* InConfig);
    
};


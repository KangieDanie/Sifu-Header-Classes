#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineSetting.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OpenColorIO -ObjectName=OpenColorIODisplayConfiguration -FallbackName=OpenColorIODisplayConfiguration
#include "MoviePipelineColorSetting.generated.h"

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelineColorSetting : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FOpenColorIODisplayConfiguration OCIOConfiguration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bDisableToneCurve;
    
    UMoviePipelineColorSetting();
};


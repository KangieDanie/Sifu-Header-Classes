#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineSetting.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAntiAliasingMethod -FallbackName=EAntiAliasingMethod
#include "MoviePipelineAntiAliasingSetting.generated.h"

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpatialSampleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TemporalSampleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideAntiAliasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAntiAliasingMethod> AntiAliasingMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 RenderWarmUpCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCameraCutForWarmUp;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 EngineWarmUpCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRenderWarmUpFrames;
    
    UMoviePipelineAntiAliasingSetting();
};


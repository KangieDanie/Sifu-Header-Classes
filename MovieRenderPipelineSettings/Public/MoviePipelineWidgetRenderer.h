#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineRenderPass -FallbackName=MoviePipelineRenderPass
#include "MoviePipelineWidgetRenderer.generated.h"

class UTextureRenderTarget2D;

UCLASS()
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTextureRenderTarget2D* RenderTarget;
    
public:
    UMoviePipelineWidgetRenderer();
};


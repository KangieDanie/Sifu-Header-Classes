#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineRenderPass -FallbackName=MoviePipelineRenderPass
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "MoviePipelineBurnInSetting.generated.h"

class UTextureRenderTarget2D;
class UMoviePipelineBurnInWidget;

UCLASS()
class MOVIERENDERPIPELINESETTINGS_API UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftClassPath BurnInClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCompositeOntoFinalImage;
    
private:
    UPROPERTY(Transient)
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(Export, Transient)
    UMoviePipelineBurnInWidget* BurnInWidgetInstance;
    
public:
    UMoviePipelineBurnInSetting();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpressionCustomOutput -FallbackName=MaterialExpressionCustomOutput
#include "GrassInput.h"
#include "MaterialExpressionLandscapeGrassOutput.generated.h"

UCLASS(CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGrassInput> GrassTypes;
    
    UMaterialExpressionLandscapeGrassOutput();
};


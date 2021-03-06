#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpressionCustomOutput -FallbackName=MaterialExpressionCustomOutput
#include "PhysicalMaterialInput.h"
#include "MaterialExpressionLandscapePhysicalMaterialOutput.generated.h"

UCLASS(CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPhysicalMaterialInput> Inputs;
    
    UMaterialExpressionLandscapePhysicalMaterialOutput();
};


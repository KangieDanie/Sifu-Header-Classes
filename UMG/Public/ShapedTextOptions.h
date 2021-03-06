#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextShapingMethod -FallbackName=ETextShapingMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextFlowDirection -FallbackName=ETextFlowDirection
#include "ShapedTextOptions.generated.h"

USTRUCT(BlueprintType)
struct UMG_API FShapedTextOptions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bOverride_TextShapingMethod: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_TextFlowDirection: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ETextShapingMethod TextShapingMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ETextFlowDirection TextFlowDirection;
    
    FShapedTextOptions();
};


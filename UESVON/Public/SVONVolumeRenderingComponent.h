#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "SVONVolumeRenderingComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USVONVolumeRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    USVONVolumeRenderingComponent();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "NavLinkRenderingComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NAVIGATIONSYSTEM_API UNavLinkRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UNavLinkRenderingComponent();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SoundTensionPortalVisualizerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USoundTensionPortalVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USoundTensionPortalVisualizerComponent();
};


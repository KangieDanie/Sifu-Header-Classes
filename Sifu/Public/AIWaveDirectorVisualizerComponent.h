#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIWaveDirectorVisualizerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIWaveDirectorVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAIWaveDirectorVisualizerComponent();
};


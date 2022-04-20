#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MatineeCameraShake -FallbackName=MatineeCameraShake
#include "SCCameraShake.generated.h"

UCLASS(EditInlineNew)
class SCCORE_API USCCameraShake : public UMatineeCameraShake {
    GENERATED_BODY()
public:
    USCCameraShake();
};


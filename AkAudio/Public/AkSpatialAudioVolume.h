#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "AkSpatialAudioVolume.generated.h"

class UAkLateReverbComponent;
class UAkSurfaceReflectorSetComponent;
class UAkRoomComponent;

UCLASS()
class AKAUDIO_API AAkSpatialAudioVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAkLateReverbComponent* LateReverb;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAkRoomComponent* Room;
    
    AAkSpatialAudioVolume();
};


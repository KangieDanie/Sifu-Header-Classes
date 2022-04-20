#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "AkReverbVolume.generated.h"

class UAkAuxBus;
class UAkLateReverbComponent;

UCLASS()
class AKAUDIO_API AAkReverbVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bEnabled: 1;
    
    UPROPERTY()
    UAkAuxBus* AuxBus;
    
    UPROPERTY()
    FString AuxBusName;
    
    UPROPERTY()
    float SendLevel;
    
    UPROPERTY()
    float FadeRate;
    
    UPROPERTY()
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UAkLateReverbComponent* LateReverbComponent;
    
    AAkReverbVolume();
};


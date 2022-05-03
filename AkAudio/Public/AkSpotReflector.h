#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AkSpotReflector.generated.h"

class UAkAuxBus;
class UAkAcousticTexture;

UCLASS()
class AKAUDIO_API AAkSpotReflector : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAuxBus* EarlyReflectionAuxBus;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FString EarlyReflectionAuxBusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAcousticTexture* AcousticTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceScalingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Level;
    
    AAkSpotReflector();
};


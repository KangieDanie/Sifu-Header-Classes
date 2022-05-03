#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "AkLateReverbComponent.generated.h"

class UAkLateReverbComponent;
class UAkAuxBus;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkLateReverbComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAuxBus* AuxBus;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FString AuxBusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(Export, Transient)
    UAkLateReverbComponent* NextLowerPriorityComponent;
    
    UAkLateReverbComponent();
};


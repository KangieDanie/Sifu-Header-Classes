#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCPlayerVolume -FallbackName=SCPlayerVolume
#include "SoundTensionThreat.h"
#include "SoundTensionVolume.generated.h"

UCLASS()
class SIFU_API ASoundTensionVolume : public ASCPlayerVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 m_iTensionLevel;
    
    UPROPERTY(EditAnywhere)
    FSoundTensionThreat m_Threat;
    
public:
    ASoundTensionVolume();
};


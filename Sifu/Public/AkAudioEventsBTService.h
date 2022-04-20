#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "AkAudioEventsBTService.generated.h"

class UAkAudioEvent;

UCLASS()
class SIFU_API UAkAudioEventsBTService : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* m_InAkEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* m_OutAkEvent;
    
public:
    UAkAudioEventsBTService();
};


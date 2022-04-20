#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InterpTrackInst -FallbackName=InterpTrackInst
#include "InterpTrackInstAkAudioEvent.generated.h"

UCLASS(MinimalAPI)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float LastUpdatePosition;
    
    UInterpTrackInstAkAudioEvent();
};


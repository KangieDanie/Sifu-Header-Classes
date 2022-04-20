#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InterpTrackVectorBase -FallbackName=InterpTrackVectorBase
#include "AkAudioEventTrackKey.h"
#include "InterpTrackAkAudioEvent.generated.h"

UCLASS(CollapseCategories)
class AKAUDIO_API UInterpTrackAkAudioEvent : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAkAudioEventTrackKey> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bContinueEventOnMatineeEnd: 1;
    
    UInterpTrackAkAudioEvent();
};


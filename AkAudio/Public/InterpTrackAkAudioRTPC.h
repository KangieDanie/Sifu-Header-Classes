#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InterpTrackFloatBase -FallbackName=InterpTrackFloatBase
#include "InterpTrackAkAudioRTPC.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPlayOnReverse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bContinueRTPCOnMatineeEnd: 1;
    
    UInterpTrackAkAudioRTPC();
};


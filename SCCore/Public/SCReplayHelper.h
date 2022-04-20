#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SCReplayHelper.generated.h"

class UObject;

UCLASS(BlueprintType)
class SCCORE_API USCReplayHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCReplayHelper();
    UFUNCTION(BlueprintPure)
    static bool BPF_IsReplayRecording(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsReplayPlaying(const UObject* _worldContextObject);
    
};


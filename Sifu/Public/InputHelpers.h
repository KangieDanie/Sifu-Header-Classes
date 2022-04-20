#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "InputAction.h"
#include "InputHelpers.generated.h"

class ASCPlayerController;

UCLASS(BlueprintType)
class SIFU_API UInputHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInputHelpers();
    UFUNCTION(BlueprintCallable)
    static float BPF_GetInputActionPressedDurationNormalized(ASCPlayerController* _playerController, InputAction _eInputAction);
    
};


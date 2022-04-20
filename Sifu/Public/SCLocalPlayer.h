#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayer -FallbackName=LocalPlayer
#include "SCLocalPlayer.generated.h"

UCLASS(NonTransient)
class SIFU_API USCLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    USCLocalPlayer();
};


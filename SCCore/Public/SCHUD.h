#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "SCHUD.generated.h"

UCLASS(NonTransient)
class SCCORE_API ASCHUD : public AHUD {
    GENERATED_BODY()
public:
    ASCHUD();
};


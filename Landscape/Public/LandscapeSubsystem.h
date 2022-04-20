#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "LandscapeSubsystem.generated.h"

UCLASS(MinimalAPI)
class ULandscapeSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    ULandscapeSubsystem();
};


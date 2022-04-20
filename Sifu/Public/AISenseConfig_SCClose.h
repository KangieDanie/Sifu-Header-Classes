#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseConfig_Sight -FallbackName=AISenseConfig_Sight
#include "AISenseConfig_SCClose.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UAISenseConfig_SCClose : public UAISenseConfig_Sight {
    GENERATED_BODY()
public:
    UAISenseConfig_SCClose();
};


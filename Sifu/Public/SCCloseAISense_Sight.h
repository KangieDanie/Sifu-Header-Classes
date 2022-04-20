#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISense_Sight -FallbackName=AISense_Sight
#include "SCCloseAISense_Sight.generated.h"

UCLASS()
class SIFU_API USCCloseAISense_Sight : public UAISense_Sight {
    GENERATED_BODY()
public:
    USCCloseAISense_Sight();
};


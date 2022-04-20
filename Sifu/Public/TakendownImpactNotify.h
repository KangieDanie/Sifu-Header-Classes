#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "TakendownImpactNotify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API UTakendownImpactNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UTakendownImpactNotify();
};


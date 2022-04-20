#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "TriggerTauntEffectsNotify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API UTriggerTauntEffectsNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UTriggerTauntEffectsNotify();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "StaminaNotify.generated.h"

UCLASS(Abstract, CollapseCategories)
class SIFU_API UStaminaNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UStaminaNotify();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "TargetForSlotsEnumHandler.generated.h"

USTRUCT(BlueprintType)
struct FTargetForSlotsEnumHandler : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    SIFU_API FTargetForSlotsEnumHandler();
};


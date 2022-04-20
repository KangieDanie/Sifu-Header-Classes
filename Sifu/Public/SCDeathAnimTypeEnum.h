#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "SCDeathAnimTypeEnum.generated.h"

USTRUCT(BlueprintType)
struct FSCDeathAnimTypeEnum : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    SIFU_API FSCDeathAnimTypeEnum();
};


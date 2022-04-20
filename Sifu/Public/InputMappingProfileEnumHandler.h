#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "InputMappingProfileEnumHandler.generated.h"

USTRUCT(BlueprintType)
struct FInputMappingProfileEnumHandler : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    SIFU_API FInputMappingProfileEnumHandler();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AbilityPayload.generated.h"

UCLASS(Abstract)
class SIFU_API UAbilityPayload : public UObject {
    GENERATED_BODY()
public:
    UAbilityPayload();
};


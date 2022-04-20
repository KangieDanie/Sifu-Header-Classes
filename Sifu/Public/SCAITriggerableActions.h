#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SCAITriggerableActions.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIFU_API USCAITriggerableActions : public UObject {
    GENERATED_BODY()
public:
    USCAITriggerableActions();
};


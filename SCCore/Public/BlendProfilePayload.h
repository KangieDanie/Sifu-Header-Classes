#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlendProfilePayload.generated.h"

UCLASS(Abstract)
class SCCORE_API UBlendProfilePayload : public UObject {
    GENERATED_BODY()
public:
    UBlendProfilePayload();
};


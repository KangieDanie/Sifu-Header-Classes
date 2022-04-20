#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BaseActorCondition.generated.h"

UCLASS(Abstract)
class SIFU_API UBaseActorCondition : public UObject {
    GENERATED_BODY()
public:
    UBaseActorCondition();
};


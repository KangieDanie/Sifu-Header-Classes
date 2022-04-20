#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AttributeSet.generated.h"

UCLASS(DefaultToInstanced)
class GAMEPLAYABILITIES_API UAttributeSet : public UObject {
    GENERATED_BODY()
public:
    UAttributeSet();
};


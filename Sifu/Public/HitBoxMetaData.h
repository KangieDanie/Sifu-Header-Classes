#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HitBoxMetaData.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIFU_API UHitBoxMetaData : public UObject {
    GENERATED_BODY()
public:
    UHitBoxMetaData();
};


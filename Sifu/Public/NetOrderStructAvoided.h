#pragma once
#include "CoreMinimal.h"
#include "OrderOverAttackInfo.h"
#include "NetOrderStruct.h"
#include "NetOrderStructAvoided.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructAvoided : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FOrderOverAttackInfo m_AvoidInfo;
    
    SIFU_API FNetOrderStructAvoided();
};


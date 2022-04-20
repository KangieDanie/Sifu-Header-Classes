#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.generated.h"

class AActor;
class UAbilityPayload;

USTRUCT(BlueprintType)
struct SIFU_API FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<AActor> m_TargetActor;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UAbilityPayload> m_Payload;
    
    FNetOrderStruct();
};


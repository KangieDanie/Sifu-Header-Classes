#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ComboAIConditionFindActorsEnvQueryResult.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FComboAIConditionFindActorsEnvQueryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> m_Actor;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_vLocation;
    
    SIFU_API FComboAIConditionFindActorsEnvQueryResult();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "PatrolActivity.generated.h"

USTRUCT(BlueprintType)
struct FPatrolActivity {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_animContainer;
    
    UPROPERTY(EditAnywhere)
    float m_fActivityDuration;
    
    SIFU_API FPatrolActivity();
};


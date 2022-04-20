#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "AbandoningAnimations.generated.h"

USTRUCT()
struct FAbandoningAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_GoingDown;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_Loop;
    
    SIFU_API FAbandoningAnimations();
};


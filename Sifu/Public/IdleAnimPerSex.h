#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "IdleAnimPerSex.generated.h"

USTRUCT()
struct FIdleAnimPerSex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_AnimsPerSex[2];
    
    SIFU_API FIdleAnimPerSex();
};


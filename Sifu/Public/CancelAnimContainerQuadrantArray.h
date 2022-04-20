#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "CancelAnimContainerQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FCancelAnimContainerQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_Array[4];
    
    SIFU_API FCancelAnimContainerQuadrantArray();
};


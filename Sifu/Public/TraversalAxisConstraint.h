#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESimpleAxis -FallbackName=ESimpleAxis
#include "ESimpleAxisSide.h"
#include "TraversalAxisConstraint.generated.h"

USTRUCT(BlueprintType)
struct FTraversalAxisConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESimpleAxis m_eAxis;
    
    UPROPERTY(EditAnywhere)
    ESimpleAxisSide m_eForbiddenAxisSide;
    
    SIFU_API FTraversalAxisConstraint();
};


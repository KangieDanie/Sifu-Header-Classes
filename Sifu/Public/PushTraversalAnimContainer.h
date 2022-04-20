#pragma once
#include "CoreMinimal.h"
#include "TraversalAnimContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "PushTraversalAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FPushTraversalAnimContainer : public FTraversalAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_InstigatorAnim;
    
    FPushTraversalAnimContainer();
};


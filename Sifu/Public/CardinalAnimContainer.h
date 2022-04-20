#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "CardinalAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FCardinalAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_Anims[4];
    
    SIFU_API FCardinalAnimContainer();
};


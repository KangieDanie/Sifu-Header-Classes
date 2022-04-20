#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "RotationAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FRotationAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_Anims[3];
    
    SIFU_API FRotationAnimContainer();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "SpeedStateAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FSpeedStateAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_Anims[4];
    
    SIFU_API FSpeedStateAnimContainer();
};


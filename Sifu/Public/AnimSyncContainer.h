#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "AnimSyncContainer.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimSyncContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_InstigatorAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_VictimAnim;
    
    FAnimSyncContainer();
};


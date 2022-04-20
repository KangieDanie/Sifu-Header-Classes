#pragma once
#include "CoreMinimal.h"
#include "SwapperStructBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "AnimStructBase.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStructBase : public FSwapperStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FAnimContainer m_AnimContainer1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FAnimContainer m_AnimContainer2;
    
    FAnimStructBase();
};


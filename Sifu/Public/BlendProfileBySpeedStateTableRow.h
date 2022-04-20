#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BlendProfileBySpeedStateTableRow.generated.h"

class UBlendProfile;

USTRUCT()
struct SIFU_API FBlendProfileBySpeedStateTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UBlendProfile* m_BlendProfileBySpeedState[4];
    
    FBlendProfileBySpeedStateTableRow();
};


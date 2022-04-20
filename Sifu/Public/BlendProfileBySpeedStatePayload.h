#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=BlendProfilePayload -FallbackName=BlendProfilePayload
#include "BlendProfileBySpeedStateStruct.h"
#include "BlendProfileBySpeedStatePayload.generated.h"

UCLASS(Abstract)
class SIFU_API UBlendProfileBySpeedStatePayload : public UBlendProfilePayload {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlendProfileBySpeedStateStruct m_BlendProfiles;
    
    UBlendProfileBySpeedStatePayload();
};


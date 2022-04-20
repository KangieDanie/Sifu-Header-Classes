#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "FocusPointsGainStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FFocusPointsGainStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_FocusGainEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fGainValue;
    
    FFocusPointsGainStruct();
};


#pragma once
#include "CoreMinimal.h"
#include "EOrderType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "EditableOrderType.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FEditableOrderType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EOrderType m_eOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_BPOrderID;
    
    FEditableOrderType();
};


#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ELookAtApplyMode -FallbackName=ELookAtApplyMode
#include "NetOrderStructPlayAnimVariableWeight.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructPlayAnimVariableWeight : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_AnimContainerToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_VariableWeightLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELookAtApplyMode m_eLookAtApplyMode;
    
    SIFU_API FNetOrderStructPlayAnimVariableWeight();
};


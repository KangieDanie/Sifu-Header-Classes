#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnimVariableWeight.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "NetStructOpeningDoor.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FNetStructOpeningDoor : public FNetOrderStructPlayAnimVariableWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimationAsset* m_OpeningDoorAnimAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimationAsset* m_ClosingDoorAnimAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bInteraction1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_AnimContainerToPlayWhenCarryingWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_VariableWeightLayerWhenCarryingWeapon;
    
    SIFU_API FNetStructOpeningDoor();
};


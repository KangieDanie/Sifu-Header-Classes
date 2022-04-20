#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EquipmentShopDataRow.generated.h"

class UBaseItemData;

USTRUCT(BlueprintType)
struct SIFU_API FEquipmentShopDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBaseItemData* m_Equipment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iGMLevelRequired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iGleamLevelRequired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bAbsolverRequired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iFragmentPrice;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iPrestigePointPrice;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iMaterialIndex;
    
    FEquipmentShopDataRow();
};


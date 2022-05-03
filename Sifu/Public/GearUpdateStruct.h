#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ECharacterGender -FallbackName=ECharacterGender
#include "EquipmentStruct.h"
#include "GearUpdateStruct.generated.h"

class UBaseWeaponData;

USTRUCT()
struct FGearUpdateStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FEquipmentStruct> m_Outfits;
    
    UPROPERTY()
    UBaseWeaponData* m_weaponData;
    
    UPROPERTY()
    ECharacterGender m_eGender;
    
    UPROPERTY()
    uint8 m_uiSkinTone;
    
    SIFU_API FGearUpdateStruct();
};


#pragma once
#include "CoreMinimal.h"
#include "EQuadrantTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCCardinalPoints -FallbackName=ESCCardinalPoints
#include "ParryRequestInfos.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FParryRequestInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EQuadrantTypes m_eQuadrant;
    
    UPROPERTY(BlueprintReadWrite)
    ESCCardinalPoints m_eCardinal;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bFromDown;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bHasAWeapon;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bIsWeaponOnOppositeHand;
    
    FParryRequestInfos();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ChargedOverridingHitBox.generated.h"

USTRUCT(BlueprintType)
struct FChargedOverridingHitBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_uiHitBoxToOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_HitRow;
    
    SIFU_API FChargedOverridingHitBox();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BaseAttackDataRow.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FBaseAttackDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_RealAttackName;
    
    FBaseAttackDataRow();
};


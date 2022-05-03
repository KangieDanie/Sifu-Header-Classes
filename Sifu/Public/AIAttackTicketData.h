#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AttackTicketConfig.h"
#include "AIAttackTicketData.generated.h"

UCLASS()
class SIFU_API UAIAttackTicketData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttackTicketConfig m_Config;
    
    UPROPERTY()
    int32 m_iSerializeVersion;
    
    UAIAttackTicketData();
};


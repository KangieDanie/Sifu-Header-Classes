#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "IdleAnimAndTransition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCRotationWay -FallbackName=ESCRotationWay
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ELookAtApplyMode -FallbackName=ELookAtApplyMode
#include "AIIdleDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAIIdleDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIdleAnimAndTransition m_IdleAndExitAnimation;
    
    UPROPERTY(VisibleAnywhere)
    ESCRotationWay m_eSouthRotationWay;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanPlayFidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELookAtApplyMode m_eLookAtApplyMode;
    
    UAIIdleDB();
};


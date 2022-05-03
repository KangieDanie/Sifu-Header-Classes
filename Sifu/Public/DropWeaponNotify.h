#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotify.h"
#include "EDropNotifyApplyMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ECoordinateSystem.h"
#include "EDropReason.h"
#include "DropWeaponNotify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API UDropWeaponNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_vImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bImpulseInLocalSocketSpace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECoordinateSystem m_eImpulseCharacterSpace;
    
    UPROPERTY(EditAnywhere)
    EDropNotifyApplyMode m_ApplyMode;
    
    UPROPERTY(EditAnywhere)
    EDropReason m_eDropReason;
    
public:
    UDropWeaponNotify();
};


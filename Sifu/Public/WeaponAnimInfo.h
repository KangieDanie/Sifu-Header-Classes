#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AssociatedPropsAnimInfo -FallbackName=AssociatedPropsAnimInfo
#include "EWeaponOrientationConstraint.h"
#include "EWeaponAnimType.h"
#include "EWeaponBlendSpaceComputeTime.h"
#include "WeaponBlendSpaceParam.h"
#include "WeaponAnimInfo.generated.h"

class UCurveFloat;
class UAnimationAsset;
class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct SIFU_API FWeaponAnimInfo : public FAssociatedPropsAnimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EWeaponAnimType m_eWeaponAnimType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimationAsset* m_weaponAnimAssociated;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpaceBase* m_weaponBlendSpaceAssociated;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FWeaponBlendSpaceParam> m_weaponBlendSpaceParam;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_playRateCurve;
    
    UPROPERTY(EditAnywhere)
    EWeaponBlendSpaceComputeTime m_eBlendSpaceComputeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EWeaponOrientationConstraint m_eOrientationConstraint;
    
    FWeaponAnimInfo();
};


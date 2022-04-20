#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "SCAnimOrderServiceSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimMetaData -FallbackName=AnimMetaData
#include "PropertyFloorBoneRepartition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
#include "WeaponAnimInfo.h"
#include "SCAnimMetaData.generated.h"

class ABaseCharacter;
class ABaseWeapon;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API USCAnimMetaData : public UAnimMetaData, public IBoneReferenceContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSCAnimOrderServiceSettings> m_CustomOrderServiceSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseWeaponAnimInfos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWeaponAnimInfo m_WeaponAnimInfos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<TSubclassOf<ABaseWeapon>, FWeaponAnimInfo> m_WeaponAnimInfosPerClass;
    
    UPROPERTY(EditAnywhere)
    FName m_SlopeCurveName;
    
    UPROPERTY(EditAnywhere)
    bool m_bShowSyncedAnimDebug;
    
    UPROPERTY(EditAnywhere)
    bool m_bRotateTargetBoneLocationOnFloorOrientation;
    
    UPROPERTY(EditAnywhere)
    bool m_bLockSpineXAxisRotation;
    
    UPROPERTY(EditAnywhere)
    bool m_bLockSpineYAxisRotation;
    
    UPROPERTY(EditAnywhere)
    float m_fFloorSpineRepartitionBlendInOut;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_FloorSpineRepartitionFrameRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideSlopeBoneRepartition;
    
    UPROPERTY(EditAnywhere)
    TArray<FPropertyFloorBoneRepartition> m_OverrideSlopeBoneRepartition;
    
    USCAnimMetaData();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPlay(uint8 _uiOrderId, ABaseCharacter* _character) const;
    
    
    // Fix for true pure virtual functions not being implemented
};


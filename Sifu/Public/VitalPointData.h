#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OverridingHitBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=InheritedDataAsset -FallbackName=InheritedDataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "EditableOrderType.h"
#include "AnimSyncContainer.h"
#include "VitalPointData.generated.h"

class AAimingBillboardActor;
class UTexture;
class UVitalPointEvents;
class UVitalPointCheckCondition;

UCLASS(BlueprintType)
class UVitalPointData : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture* m_Texture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCUserDefinedEnumHandler m_Slot;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UVitalPointEvents> m_events;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AAimingBillboardActor> m_ClassOfBillBoardToSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimSyncContainer m_SyncAnimToPlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iFocusPointsCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FOverridingHitBox m_FocusAttackEffect;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomOrder;
    
    UPROPERTY(EditAnywhere)
    FEditableOrderType m_CustomInstigatorOrderType;
    
    UPROPERTY(EditAnywhere)
    FEditableOrderType m_CustomVictimOrderType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UVitalPointCheckCondition> m_CheckConditionBlueprint;
    
    UVitalPointData();
};


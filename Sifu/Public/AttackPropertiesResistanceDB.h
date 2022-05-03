#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=InheritedDataAsset -FallbackName=InheritedDataAsset
#include "SuperDizzyReaction.h"
#include "AttackPropertyResistanceMatrixByFightingState.h"
#include "PropertyReaction.h"
#include "DizzyReaction.h"
#include "StructureBrokenReaction.h"
#include "PushPropertyReaction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "AttackPropertiesResistanceDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAttackPropertiesResistanceDB : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttackPropertyResistanceMatrixByFightingState m_ResistanceMatrix;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsConsidereredAsKnockdownThreat;
    
    UPROPERTY(EditAnywhere)
    bool m_bInterruptDownWhenAlone;
    
    UPROPERTY(EditAnywhere)
    FPropertyReaction m_DownReaction;
    
    UPROPERTY(EditAnywhere)
    FStructureBrokenReaction m_StructureBrokenReaction;
    
    UPROPERTY(EditAnywhere)
    FDizzyReaction m_DizzyReaction;
    
    UPROPERTY(EditAnywhere)
    FSuperDizzyReaction m_SuperDizzyReaction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPushPropertyReaction m_PushedReaction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimContainer m_FallFromPushedAnim;
    
    UAttackPropertiesResistanceDB();
};


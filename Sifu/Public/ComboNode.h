#pragma once
#include "CoreMinimal.h"
#include "ChargedBuildUpStructByQuadrant.h"
#include "AIActionAttackClassInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ComboTransitions.h"
#include "ChargedAttackNameByQuadrants.h"
#include "AvailabilityLayerContainer.h"
#include "EComboTransition.h"
#include "ComboNode.generated.h"

class UComboEvent;

USTRUCT(BlueprintType)
struct FComboNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_RequiredTags;
    
    UPROPERTY(VisibleAnywhere)
    FName m_Attacks[4];
    
    UPROPERTY()
    UClass* m_AIAttackActionClass;
    
    UPROPERTY(VisibleAnywhere)
    FAIActionAttackClassInstance m_AIAttackAction;
    
    UPROPERTY(VisibleAnywhere)
    FComboTransitions m_Transitions;
    
    UPROPERTY(VisibleAnywhere)
    int32 m_NodeRedirect;
    
    UPROPERTY(VisibleAnywhere)
    FAvailabilityLayerContainer m_NodeRedirectAvailabilityLayer;
    
    UPROPERTY(VisibleAnywhere)
    TArray<EComboTransition> m_NodeRedirectIgnoredTransitions;
    
    UPROPERTY(VisibleAnywhere)
    UComboEvent* m_event;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FChargedBuildUpStructByQuadrant> m_BuildUpForChargedAttack;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FChargedAttackNameByQuadrants> m_ChargedAttacks;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName m_Name;
    
    UPROPERTY(VisibleAnywhere)
    bool m_bSkip;
    
    SIFU_API FComboNode();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EGameFlowTravelType.h"
#include "GameFlowNextMap.generated.h"

class UGameFlowNode;

UCLASS()
class SCCORE_API UGameFlowNextMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FGameplayTagContainer m_ConditionGPTags;
    
    UPROPERTY(VisibleAnywhere)
    FGameplayTagContainer m_MapOptionsFromTransition;
    
    UPROPERTY(VisibleAnywhere)
    EGameFlowTravelType m_eTravelType;
    
    UPROPERTY()
    UGameFlowNode* m_NextMapNode;
    
    UGameFlowNextMap();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=GameFlowNode -FallbackName=GameFlowNode
#include "EMenuEnum.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCGameInstanceState -FallbackName=ESCGameInstanceState
#include "WGGameFlowNode.generated.h"

UCLASS()
class SIFU_API UWGGameFlowNode : public UGameFlowNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    EMenuEnum m_eMenuToShow;
    
    UPROPERTY(VisibleAnywhere)
    ESCGameInstanceState m_eGameState;
    
    UWGGameFlowNode();
};


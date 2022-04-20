#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=GameFlowNextMap -FallbackName=GameFlowNextMap
#include "EMenuEnum.h"
#include "WGGameFlowNextMap.generated.h"

UCLASS()
class SIFU_API UWGGameFlowNextMap : public UGameFlowNextMap {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    EMenuEnum m_eMenuToShow;
    
    UWGGameFlowNextMap();
};


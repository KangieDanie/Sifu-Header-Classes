#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=DialogActionBase -FallbackName=DialogActionBase
#include "SwitchPhaseDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API USwitchPhaseDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_NewPhase;
    
    USwitchPhaseDialogAction();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=DialogActionBase -FallbackName=DialogActionBase
#include "TriggerGenericEventDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTriggerGenericEventDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_EventName;
    
    UTriggerGenericEventDialogAction();
};


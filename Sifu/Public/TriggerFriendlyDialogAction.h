#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=DialogActionBase -FallbackName=DialogActionBase
#include "TriggerFriendlyDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTriggerFriendlyDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UTriggerFriendlyDialogAction();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=DialogActionBase -FallbackName=DialogActionBase
#include "TriggerFightDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTriggerFightDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ActorSentToFight;
    
    UTriggerFightDialogAction();
protected:
    UFUNCTION()
    TArray<FName> GetActorOptions() const;
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=DialogActionBase -FallbackName=DialogActionBase
#include "StopLowStructureOnPrefightAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UStopLowStructureOnPrefightAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ActorKey;
    
    UStopLowStructureOnPrefightAction();
protected:
    UFUNCTION()
    TArray<FName> GetActorOptions() const;
    
};


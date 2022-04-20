#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "SCBaseUserWidget.generated.h"

class USCLevelSequence;

UCLASS(EditInlineNew)
class SCCORE_API USCBaseUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USCBaseUserWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSynchronizeProperties();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCinematicStarted(const USCLevelSequence* _inSequence);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCinematicFinished(const USCLevelSequence* _inSequence);
    
};


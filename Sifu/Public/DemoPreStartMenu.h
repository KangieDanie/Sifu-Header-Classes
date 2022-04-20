#pragma once
#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "DemoPreStartMenu.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UDemoPreStartMenu : public UMenuWidget {
    GENERATED_BODY()
public:
    UDemoPreStartMenu();
private:
    UFUNCTION()
    void OnRetryLoadProfile();
    
    UFUNCTION()
    void OnContinueWithoutSaving();
    
    UFUNCTION()
    void OnAudioLanguageSetup();
    
};


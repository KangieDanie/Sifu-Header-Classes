#pragma once
#include "CoreMinimal.h"
#include "ButtonFocusedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Button -FallbackName=Button
#include "ButtonUnFocusedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "SCButton.generated.h"

UCLASS()
class SIFU_API USCButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FButtonFocused OnFocusReceived;
    
    UPROPERTY(BlueprintAssignable)
    FButtonUnFocused OnFocusLost;
    
    USCButton();
    UFUNCTION(BlueprintCallable)
    void BPF_SetOverrideFocusTints(FLinearColor _focusedColor, FLinearColor _noFocusColor);
    
};


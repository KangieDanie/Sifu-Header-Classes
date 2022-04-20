#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "InputAction.h"
#include "EControllerIconStyles.h"
#include "EControllerIconAxisTypes.h"
#include "RichTextBlockControllerDecoratorHelper.generated.h"

UCLASS(BlueprintType)
class URichTextBlockControllerDecoratorHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URichTextBlockControllerDecoratorHelper();
    UFUNCTION(BlueprintPure)
    static FString BPF_GetInputActionValueName(InputAction _eAction);
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GetControllerIconStylesValueName(EControllerIconStyles _eStyle);
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GetControllerIconAxisTypesValueName(EControllerIconAxisTypes _eAxis);
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AkBoolPropertyToControl.h"
#include "AkItemBoolPropertiesConv.generated.h"

UCLASS(BlueprintType)
class AKAUDIO_API UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAkItemBoolPropertiesConv();
    UFUNCTION(BlueprintPure)
    static FText Conv_FAkBoolPropertyToControlToText(const FAkBoolPropertyToControl& INAkBoolPropertyToControl);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_FAkBoolPropertyToControlToString(const FAkBoolPropertyToControl& INAkBoolPropertyToControl);
    
};


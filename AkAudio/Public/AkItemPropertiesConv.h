#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AkPropertyToControl.h"
#include "AkItemPropertiesConv.generated.h"

UCLASS(BlueprintType)
class AKAUDIO_API UAkItemPropertiesConv : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAkItemPropertiesConv();
    UFUNCTION(BlueprintPure)
    static FText Conv_FAkPropertyToControlToText(const FAkPropertyToControl& INAkPropertyToControl);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_FAkPropertyToControlToString(const FAkPropertyToControl& INAkPropertyToControl);
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AkWaapiUri.h"
#include "AkWaapiUriConv.generated.h"

UCLASS(BlueprintType)
class AKAUDIO_API UAkWaapiUriConv : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAkWaapiUriConv();
    UFUNCTION(BlueprintPure)
    static FText Conv_FAkWaapiUriToText(const FAkWaapiUri& INAkWaapiUri);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_FAkWaapiUriToString(const FAkWaapiUri& INAkWaapiUri);
    
};


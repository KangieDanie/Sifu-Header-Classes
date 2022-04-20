#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AkWaapiFieldNames.h"
#include "SAkWaapiFieldNamesConv.generated.h"

UCLASS(BlueprintType)
class AKAUDIO_API USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USAkWaapiFieldNamesConv();
    UFUNCTION(BlueprintPure)
    static FText Conv_FAkWaapiFieldNamesToText(const FAkWaapiFieldNames& INAkWaapiFieldNames);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_FAkWaapiFieldNamesToString(const FAkWaapiFieldNames& INAkWaapiFieldNames);
    
};


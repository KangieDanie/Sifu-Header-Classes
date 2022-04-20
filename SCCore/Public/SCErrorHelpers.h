#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ESCMessageLogSeverity.h"
#include "SCErrorHelpers.generated.h"

UCLASS(BlueprintType)
class SCCORE_API USCErrorHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCErrorHelpers();
    UFUNCTION(BlueprintCallable)
    static void BPF_ShowMessageLog(ESCMessageLogSeverity _eSeverity, const FString& _textContent, FName _categoryName, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_Ensure(bool _bValue, const FString& _message);
    
};


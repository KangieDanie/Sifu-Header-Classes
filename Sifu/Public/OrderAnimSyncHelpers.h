#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OrderAnimSyncHelpers.generated.h"

UCLASS(BlueprintType)
class SIFU_API UOrderAnimSyncHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOrderAnimSyncHelpers();
    UFUNCTION(BlueprintCallable)
    static int32 BPF_GenerateAnimSyncID();
    
};


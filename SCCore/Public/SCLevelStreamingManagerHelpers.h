#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SCLevelStreamingManagerHelpers.generated.h"

UCLASS(BlueprintType)
class SCCORE_API USCLevelStreamingManagerHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCLevelStreamingManagerHelpers();
    UFUNCTION(BlueprintCallable)
    static void BPF_SetStreamingVolumesEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BlockLoadingsOnNextUpdate();
    
};


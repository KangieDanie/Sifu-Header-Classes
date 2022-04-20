#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "FightingCharacterHelpers.generated.h"

class UAnimSequence;

UCLASS(BlueprintType)
class SIFU_API UFightingCharacterHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFightingCharacterHelpers();
    UFUNCTION(BlueprintCallable)
    static int32 BPF_PickRandomAnimSequence(UPARAM(Ref) TArray<UAnimSequence*>& _inOutAnimHistory, const TArray<UAnimSequence*>& _animSelection, bool _bAddToHistory);
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_PickRandomAnimation(UPARAM(Ref) TArray<UAnimSequence*>& _inOutAnimHistory, const TArray<FAnimContainer>& _animSelection, bool _bAddToHistory);
    
};


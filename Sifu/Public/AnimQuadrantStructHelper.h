#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EQuadrantTypes.h"
#include "AnimQuadrantStruct.h"
#include "AnimQuadrantStructHelper.generated.h"

UCLASS(BlueprintType)
class UAnimQuadrantStructHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimQuadrantStructHelper();
    UFUNCTION(BlueprintPure)
    static void BPF_MakeAnimQuadrantStruct(EQuadrantTypes _eQuadrant, FAnimQuadrantStruct& _outStruct);
    
};


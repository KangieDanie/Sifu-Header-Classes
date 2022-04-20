#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EAttackOrigin.h"
#include "AttackOriginHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAttackOriginHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAttackOriginHelper();
    UFUNCTION(BlueprintPure)
    static EAttackOrigin BPF_Mirror(EAttackOrigin _eAttackOrigin, bool _bMirror);
    
};


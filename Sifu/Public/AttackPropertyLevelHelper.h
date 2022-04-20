#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AttackPropertyLevel.h"
#include "EHitBoxAttackProperties.h"
#include "AttackPropertyLevelHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAttackPropertyLevelHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAttackPropertyLevelHelper();
    UFUNCTION(BlueprintPure)
    static int32 BPF_GetAttackPropertyLevel(const FAttackPropertyLevel& _attackPropertyLevel, EHitBoxAttackProperties _eProperty);
    
};


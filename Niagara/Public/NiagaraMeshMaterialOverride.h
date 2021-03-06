#pragma once
#include "CoreMinimal.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraMeshMaterialOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraMeshMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* ExplicitMat;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding UserParamBinding;
    
    FNiagaraMeshMaterialOverride();
};


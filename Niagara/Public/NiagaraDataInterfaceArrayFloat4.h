#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceArray.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "NiagaraDataInterfaceArrayFloat4.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector4> FloatData;
    
    UNiagaraDataInterfaceArrayFloat4();
};


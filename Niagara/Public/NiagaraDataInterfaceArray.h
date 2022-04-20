#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceArray.generated.h"

UCLASS(Abstract, BlueprintType, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArray : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxElements;
    
    UNiagaraDataInterfaceArray();
};


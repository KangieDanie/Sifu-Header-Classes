#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "NiagaraDataInterfaceArray.h"
#include "NiagaraDataInterfaceArrayColor.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FLinearColor> ColorData;
    
    UNiagaraDataInterfaceArrayColor();
};


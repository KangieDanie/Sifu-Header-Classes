#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceLandscape.generated.h"

class AActor;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AActor* SourceLandscape;
    
    UNiagaraDataInterfaceLandscape();
};


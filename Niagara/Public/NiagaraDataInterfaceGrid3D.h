#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceRWBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "ESetResolutionMethod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NiagaraDataInterfaceGrid3D.generated.h"

UCLASS(Abstract, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIntVector NumCells;
    
    UPROPERTY(EditAnywhere)
    float CellSize;
    
    UPROPERTY(EditAnywhere)
    int32 NumCellsMaxAxis;
    
    UPROPERTY(EditAnywhere)
    ESetResolutionMethod SetResolutionMethod;
    
    UPROPERTY(EditAnywhere)
    FVector WorldBBoxSize;
    
    UNiagaraDataInterfaceGrid3D();
};


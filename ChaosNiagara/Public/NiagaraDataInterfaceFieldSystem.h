#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterface -FallbackName=NiagaraDataInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NiagaraDataInterfaceFieldSystem.generated.h"

class UBlueprint;
class AActor;

UCLASS(EditInlineNew)
class CHAOSNIAGARA_API UNiagaraDataInterfaceFieldSystem : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UBlueprint* BlueprintSource;
    
    UPROPERTY(EditAnywhere)
    AActor* SourceActor;
    
    UPROPERTY(EditAnywhere)
    FIntVector FieldDimensions;
    
    UPROPERTY(EditAnywhere)
    FVector MinBounds;
    
    UPROPERTY(EditAnywhere)
    FVector MaxBounds;
    
    UNiagaraDataInterfaceFieldSystem();
};


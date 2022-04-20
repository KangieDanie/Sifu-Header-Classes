#pragma once
#include "CoreMinimal.h"
#include "EControlRigComponentMapDirection.h"
#include "ERigElementType.h"
#include "ControlRigComponentMappedComponent.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FControlRigComponentMappedComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USceneComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ElementName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigElementType ElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EControlRigComponentMapDirection Direction;
    
    CONTROLRIG_API FControlRigComponentMappedComponent();
};


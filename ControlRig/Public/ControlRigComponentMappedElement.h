#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "ERigElementType.h"
#include "EControlRigComponentSpace.h"
#include "EControlRigComponentMapDirection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ControlRigComponentMappedElement.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FControlRigComponentMappedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComponentReference ComponentReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TransformIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TransformName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigElementType ElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ElementName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EControlRigComponentMapDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EControlRigComponentSpace Space;
    
    UPROPERTY(Export, Transient)
    USceneComponent* SceneComponent;
    
    UPROPERTY(Transient)
    int32 ElementIndex;
    
    UPROPERTY(Transient)
    int32 SubIndex;
    
    CONTROLRIG_API FControlRigComponentMappedElement();
};


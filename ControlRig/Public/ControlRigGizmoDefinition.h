#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ControlRigGizmoDefinition.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct CONTROLRIG_API FControlRigGizmoDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName GizmoName;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    FControlRigGizmoDefinition();
};


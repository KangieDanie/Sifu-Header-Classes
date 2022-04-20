#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ControlRigGizmoDefinition.h"
#include "ControlRigGizmoLibrary.generated.h"

class UMaterial;

UCLASS()
class CONTROLRIG_API UControlRigGizmoLibrary : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FControlRigGizmoDefinition DefaultGizmo;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterial> DefaultMaterial;
    
    UPROPERTY(EditAnywhere)
    FName MaterialColorParameter;
    
    UPROPERTY(EditAnywhere)
    TArray<FControlRigGizmoDefinition> Gizmos;
    
    UControlRigGizmoLibrary();
};


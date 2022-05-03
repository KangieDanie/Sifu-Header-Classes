#pragma once
#include "CoreMinimal.h"
#include "ToolContextTransactionProvider.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ActiveGizmo.h"
#include "InteractiveGizmoManager.generated.h"

class UInteractiveGizmoBuilder;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveGizmoManager : public UObject, public IToolContextTransactionProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FActiveGizmo> ActiveGizmos;
    
    UPROPERTY()
    TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders;
    
public:
    UInteractiveGizmoManager();
    
    // Fix for true pure virtual functions not being implemented
};


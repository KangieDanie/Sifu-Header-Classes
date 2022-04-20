#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ControlRigGizmoActor.generated.h"

class USceneComponent;
class UStaticMeshComponent;

UCLASS(NotPlaceable, Transient)
class CONTROLRIG_API AControlRigGizmoActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* ActorRootComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY()
    uint32 ControlRigIndex;
    
    UPROPERTY()
    FName ControlName;
    
    UPROPERTY()
    FName ColorParameterName;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bSelected: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bSelectable: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bHovered: 1;
    
public:
    AControlRigGizmoActor();
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool bInSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectable(bool bInSelectable);
    
    UFUNCTION(BlueprintCallable)
    void SetHovered(bool bInHovered);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalTransform(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTransformChanged(const FTransform& NewTransform);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectionChanged(bool bIsSelected);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnManipulatingChanged(bool bIsManipulating);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHoveredChanged(bool bIsSelected);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnabledChanged(bool bIsEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsSelectedInEditor() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHovered() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetGlobalTransform() const;
    
};


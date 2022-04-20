#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ControlRigComponentDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ControlRigComponentMappedElement.h"
#include "EControlRigComponentSpace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ERigElementType.h"
#include "ControlRigComponentMappedCurve.h"
#include "ControlRigComponentMappedBone.h"
#include "ControlRigComponentMappedComponent.h"
#include "ControlRigComponent.generated.h"

class UControlRig;
class USkeletalMesh;
class UControlRigComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CONTROLRIG_API UControlRigComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UControlRig> ControlRigClass;
    
    UPROPERTY(BlueprintAssignable)
    FControlRigComponentDelegate OnPostInitializeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FControlRigComponentDelegate OnPreSetupDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FControlRigComponentDelegate OnPostSetupDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FControlRigComponentDelegate OnPreUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FControlRigComponentDelegate OnPostUpdateDelegate;
    
    UPROPERTY(EditAnywhere)
    TArray<FControlRigComponentMappedElement> MappedElements;
    
    UPROPERTY(EditAnywhere)
    bool bResetTransformBeforeTick;
    
    UPROPERTY(EditAnywhere)
    bool bResetInitialsBeforeSetup;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateRigOnTick;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateInEditor;
    
    UPROPERTY(EditAnywhere)
    bool bDrawBones;
    
private:
    UPROPERTY(Transient)
    UControlRig* ControlRig;
    
public:
    UControlRigComponent();
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SetControlVector2D(FName ControlName, FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlInt(FName ControlName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControlFloat(FName ControlName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControlBool(FName ControlName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneInitialTransformsFromSkeletalMesh(USkeletalMesh* InSkeletalMesh);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPreUpdate(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPreSetup(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPostUpdate(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPostSetup(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPostInitialize(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintPure)
    FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintPure)
    FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintPure)
    FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetElementNames(ERigElementType ElementType);
    
    UFUNCTION(BlueprintPure)
    FVector2D GetControlVector2D(FName ControlName);
    
    UFUNCTION(BlueprintPure)
    FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintPure)
    FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintPure)
    FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintPure)
    UControlRig* GetControlRig();
    
    UFUNCTION(BlueprintPure)
    FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintPure)
    int32 GetControlInt(FName ControlName);
    
    UFUNCTION(BlueprintPure)
    float GetControlFloat(FName ControlName);
    
    UFUNCTION(BlueprintPure)
    bool GetControlBool(FName ControlName);
    
    UFUNCTION(BlueprintPure)
    FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintPure)
    float GetAbsoluteTime() const;
    
    UFUNCTION(BlueprintPure)
    bool DoesElementExist(FName Name, ERigElementType ElementType);
    
    UFUNCTION(BlueprintCallable)
    void ClearMappedElements();
    
    UFUNCTION(BlueprintCallable)
    void AddMappedSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves);
    
    UFUNCTION(BlueprintCallable)
    void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    
    UFUNCTION(BlueprintCallable)
    void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);
    
    UFUNCTION(BlueprintCallable)
    void AddMappedCompleteSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent);
    
};


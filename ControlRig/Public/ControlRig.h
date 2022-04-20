#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RigHierarchyContainer.h"
#include "RigInfluenceMapPerEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NodeMappingProviderInterface -FallbackName=NodeMappingProviderInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
#include "ERigExecutionType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PropertyPath -ObjectName=CachedPropertyPath -FallbackName=CachedPropertyPath
#include "ControlRigDrawContainer.h"
#include "ControlRig.generated.h"

class UAssetUserData;
class UControlRigGizmoLibrary;
class URigVM;
class UAnimationDataSourceRegistry;
class UControlRig;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class CONTROLRIG_API UControlRig : public UObject, public INodeMappingProviderInterface, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ERigExecutionType ExecutionType;
    
private:
    UPROPERTY()
    URigVM* VM;
    
    UPROPERTY()
    FRigHierarchyContainer Hierarchy;
    
    UPROPERTY()
    TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary;
    
    UPROPERTY()
    TMap<FName, FCachedPropertyPath> InputProperties;
    
    UPROPERTY()
    TMap<FName, FCachedPropertyPath> OutputProperties;
    
    UPROPERTY()
    FControlRigDrawContainer DrawContainer;
    
    UPROPERTY(Transient)
    UAnimationDataSourceRegistry* DataSourceRegistry;
    
    UPROPERTY(Transient)
    TArray<FName> EventQueue;
    
    UPROPERTY()
    FRigInfluenceMapPerEvent Influences;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UControlRig* InteractionRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UControlRig> InteractionRigClass;
    
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UAssetUserData*> AssetUserData;
    
public:
    UControlRig();
    UFUNCTION(BlueprintCallable)
    void SetInteractionRigClass(TSubclassOf<UControlRig> InInteractionRigClass);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionRig(UControlRig* InInteractionRig);
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UControlRig> GetInteractionRigClass() const;
    
    UFUNCTION(BlueprintPure)
    UControlRig* GetInteractionRig() const;
    
    
    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "OrderServiceNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
#include "HittedServiceInfos.h"
#include "HittedOrderServiceNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UHittedOrderServiceNotifyState : public UOrderServiceNotifyState, public IBoneReferenceContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHittedServiceInfos m_Infos;
    
    UHittedOrderServiceNotifyState();
    
    // Fix for true pure virtual functions not being implemented
};


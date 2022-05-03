#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardComponent -FallbackName=BlackboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCPoolableActorComponent -FallbackName=SCPoolableActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
#include "SCDialogComponent.generated.h"

class UDataTable;
class UBlackboardData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCDIALOGMANAGERPLUGIN_API USCDialogComponent : public UBlackboardComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FGenericDialogEventDelegate OnGenericDialogEvent;
    
private:
    UPROPERTY(Transient)
    UDataTable* m_ContextualDb;
    
public:
    USCDialogComponent();
    UFUNCTION(BlueprintPure)
    bool BPF_InitBlackBoardFromAsset(UBlackboardData* _data);
    
    
    // Fix for true pure virtual functions not being implemented
};


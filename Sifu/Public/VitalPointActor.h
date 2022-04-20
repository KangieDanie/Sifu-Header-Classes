#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCActor -FallbackName=SCActor
#include "VitalPointDataDefinition.h"
#include "VitalPointActor.generated.h"

class AVitalPointActor;
class AAimingBillboardActor;
class AActor;

UCLASS()
class SIFU_API AVitalPointActor : public ASCActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVitalSelectionChangedDyn, bool, _bSelected, AVitalPointActor*, vitalPoint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVitalPointValidated, AVitalPointActor*, vitalPoint);
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnVitalSelectionChangedDyn OnSelectionChangedDyn;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnVitalPointValidated OnVitalPointValidated;
    
    AVitalPointActor();
private:
    UFUNCTION()
    void OnBillBoardSelectionChanged(bool _bSelected, AAimingBillboardActor* _billboard);
    
public:
    UFUNCTION(BlueprintPure)
    FVitalPointDataDefinition BPF_GetDefinition() const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetActorOwner() const;
    
};


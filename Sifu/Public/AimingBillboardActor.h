#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCActor -FallbackName=SCActor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "AimingBillboardActor.generated.h"

class AAimingBillboardActor;
class AActor;
class UBoxComponent;

UCLASS()
class SIFU_API AAimingBillboardActor : public ASCActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSelectionChangedDyn, bool, _bSelected, AAimingBillboardActor*, aimingBillboard);
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnSelectionChangedDyn OnSelectionChangedDyn;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* m_BoxComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool m_bDebug;
    
public:
    AAimingBillboardActor();
    UFUNCTION(BlueprintPure)
    float BPF_GetScore() const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetActorOwner() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector2D BPE_ComputeSize() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_ComputeScore(FVector _v3DPointToTest) const;
    
};


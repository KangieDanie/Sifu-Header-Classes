#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "SCVolume.generated.h"

class ASCVolume;
class UPrimitiveComponent;
class AActor;

UCLASS()
class SCCORE_API ASCVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    TArray<ASCVolume*> m_ChildrenVolumes;
    
private:
    UPROPERTY(Transient)
    ASCVolume* m_ParentVolume;
    
public:
    ASCVolume();
protected:
    UFUNCTION()
    void InternalOnComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION()
    void InternalOnComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    
};


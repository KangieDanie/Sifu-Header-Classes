#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FakePhysicComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UFakePhysicComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fZImpulse;
    
    UPROPERTY(EditAnywhere)
    float m_fImpulseReduc;
    
    UPROPERTY(EditAnywhere)
    FVector m_vAngularImpulse;
    
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UPrimitiveComponent* m_OverlappingComponent;
    
    UFakePhysicComponent();
protected:
    UFUNCTION()
    void NotifyBeginOverlap(UPrimitiveComponent* _OverlappedComp, AActor* _Other, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _OverlapInfo);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetOverlappingComponent(UPrimitiveComponent* _primComp);
    
};


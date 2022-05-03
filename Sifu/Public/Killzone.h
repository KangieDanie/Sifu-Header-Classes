#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshActor -FallbackName=StaticMeshActor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Killzone.generated.h"

class AActor;
class UPrimitiveComponent;
class UBoxComponent;
class AFightingCharacter;

UCLASS()
class SIFU_API AKillzone : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UBoxComponent* m_BoxComponent;
    
public:
    AKillzone();
private:
    UFUNCTION()
    void OnBoxTouched(UPrimitiveComponent* _OverlappedComp, AActor* _Other, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool BPF_IsKillzoneActive();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnBoxTouched(AFightingCharacter* _Char, const FVector& _vImpactpoint);
    
};


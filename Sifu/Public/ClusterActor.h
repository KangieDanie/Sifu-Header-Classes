#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCActor -FallbackName=SCActor
#include "TargetableActor.h"
#include "ClusterStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClusterActor.generated.h"

class AActor;

UCLASS()
class SIFU_API AClusterActor : public ASCActor, public ITargetableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FClusterStruct> m_MeshToThrowable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fTimeBeforeSpawningThrowable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_vImpulseWhenDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bCanBeTargeted;
    
private:
    UPROPERTY(EditAnywhere)
    float m_fSoundNoiseRadius;
    
public:
    AClusterActor();
private:
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnActorFromMesh();
    
    UFUNCTION(BlueprintCallable)
    void BPF_MakeNoise(AActor* _noiseSource, FVector _vLocationOverride);
    
    UFUNCTION(BlueprintPure)
    FVector BPF_GetImpulseVector() const;
    
    
    // Fix for true pure virtual functions not being implemented
};


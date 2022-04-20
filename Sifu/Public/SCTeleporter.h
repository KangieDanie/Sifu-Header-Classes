#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SCTeleporter.generated.h"

class UBoxComponent;
class USceneComponent;

UCLASS()
class SIFU_API ASCTeleporter : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    USceneComponent* m_RootComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UBoxComponent* m_EntryBoxComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UBoxComponent* m_ExitBoxComponent;
    
public:
    ASCTeleporter();
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveActorToTeleport(AActor* _leavingActor);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LaunchTeleport();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddActorToTeleport(AActor* _actorToTeleport);
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIPositionningPOI.h"
#include "AIPositionningPOIComponent.generated.h"

class AAISpawner;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIPositionningPOIComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FAIPositionningPOI m_Data;
    
    UPROPERTY(EditAnywhere)
    TArray<AAISpawner*> m_AllowedSpawners;
    
public:
    UAIPositionningPOIComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_SetData(const FAIPositionningPOI& _data, const TArray<AAISpawner*>& _allowedSpawners);
    
};


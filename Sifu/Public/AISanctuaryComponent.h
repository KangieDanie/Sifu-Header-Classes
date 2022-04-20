#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Range -FallbackName=Int32Range
#include "AISanctuaryComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAISanctuaryComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FInt32Range m_RangeNbOfEnnemies;
    
    UPROPERTY(EditAnywhere)
    bool m_bSanctuaryHasLimitedDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fSanctuaryDuration;
    
    UPROPERTY(EditAnywhere)
    bool m_bSendBarkEventWhenSanctuaryIsSafe;
    
public:
    UAISanctuaryComponent();
};


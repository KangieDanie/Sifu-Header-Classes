#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SCPoolableActor.h"
#include "SCActor.generated.h"

UCLASS()
class SCCORE_API ASCActor : public AActor, public ISCPoolableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool m_bIsStreamable;
    
private:
    UPROPERTY(VisibleInstanceOnly)
    bool m_bIsPooled;
    
public:
    ASCActor();
    
    // Fix for true pure virtual functions not being implemented
};


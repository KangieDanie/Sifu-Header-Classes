#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SCPoolableActorSpawner.generated.h"

class ASCPoolableActorsContainer;

UINTERFACE(Blueprintable)
class SCCORE_API USCPoolableActorSpawner : public UInterface {
    GENERATED_BODY()
};

class SCCORE_API ISCPoolableActorSpawner : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnGeneratePoolActors(ASCPoolableActorsContainer* _container);
    
};


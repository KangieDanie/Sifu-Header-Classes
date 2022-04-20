#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SCPoolableActorComponent.generated.h"

UINTERFACE(Blueprintable)
class SCCORE_API USCPoolableActorComponent : public UInterface {
    GENERATED_BODY()
};

class SCCORE_API ISCPoolableActorComponent : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnPoolableOwnerUninitializeComponents();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPoolableOwnerInitializeComponents();
    
};


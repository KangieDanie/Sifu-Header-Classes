#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EGameplayCueEvent.h"
#include "GameplayCueParameters.h"
#include "GameplayCueInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UGameplayCueInterface : public UInterface {
    GENERATED_BODY()
};

class IGameplayCueInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void ForwardGameplayCueToParent() PURE_VIRTUAL(ForwardGameplayCueToParent,);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
};


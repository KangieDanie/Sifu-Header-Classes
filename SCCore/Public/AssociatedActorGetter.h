#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AssociatedActorGetter.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class SCCORE_API UAssociatedActorGetter : public UObject {
    GENERATED_BODY()
public:
    UAssociatedActorGetter();
    UFUNCTION(BlueprintImplementableEvent)
    AActor* BPE_GetAssociatedActor(AActor* _inActor) const;
    
};


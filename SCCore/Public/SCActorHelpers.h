#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SCActorHelpers.generated.h"

class AActor;

UCLASS(BlueprintType)
class SCCORE_API USCActorHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCActorHelpers();
    UFUNCTION(BlueprintCallable)
    static AActor* BPF_GetClosestActor(AActor* _target, TArray<AActor*> _actors);
    
};


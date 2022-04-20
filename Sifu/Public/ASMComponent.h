#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCPoolableActorComponent -FallbackName=SCPoolableActorComponent
#include "EFightingActionState.h"
#include "ASMComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UASMComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UASMComponent();
    UFUNCTION(BlueprintPure)
    EFightingActionState BPF_GetCurrentActionState() const;
    
    
    // Fix for true pure virtual functions not being implemented
};


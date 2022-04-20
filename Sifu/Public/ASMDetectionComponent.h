#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BaseComponent.h"
#include "ASMDetectionComponent.generated.h"

class USCGameplayAbility;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UASMDetectionComponent : public UActorComponent, public IBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<USCGameplayAbility>> m_AbilityDetection;
    
    UASMDetectionComponent();
    
    // Fix for true pure virtual functions not being implemented
};


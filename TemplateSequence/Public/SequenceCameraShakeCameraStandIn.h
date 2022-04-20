#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSceneComponentImpersonator -FallbackName=MovieSceneSceneComponentImpersonator
#include "SequenceCameraShakeCameraStandIn.generated.h"

UCLASS()
class USequenceCameraShakeCameraStandIn : public UObject, public IMovieSceneSceneComponentImpersonator {
    GENERATED_BODY()
public:
    UPROPERTY()
    float FieldOfView;
    
    USequenceCameraShakeCameraStandIn();
    
    // Fix for true pure virtual functions not being implemented
};


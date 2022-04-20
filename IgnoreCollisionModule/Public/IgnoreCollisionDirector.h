#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "IgnoreCollisionDirector.generated.h"

UCLASS()
class IGNORECOLLISIONMODULE_API AIgnoreCollisionDirector : public AActor {
    GENERATED_BODY()
public:
    AIgnoreCollisionDirector();
};


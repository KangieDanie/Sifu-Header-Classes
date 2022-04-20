#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshActor -FallbackName=StaticMeshActor
#include "SCStaticMeshPrimInstActor.generated.h"

UCLASS()
class SCCORE_API ASCStaticMeshPrimInstActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    ASCStaticMeshPrimInstActor();
};


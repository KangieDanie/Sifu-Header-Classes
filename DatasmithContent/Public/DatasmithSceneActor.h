#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DatasmithSceneActor.generated.h"

class UDatasmithScene;

UCLASS()
class DATASMITHCONTENT_API ADatasmithSceneActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UDatasmithScene* Scene;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TMap<FName, TSoftObjectPtr<AActor>> RelatedActors;
    
    ADatasmithSceneActor();
};


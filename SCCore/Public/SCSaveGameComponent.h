#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SCDelegate.h"
#include "SCSaveGameComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCSaveGameComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnUpdatedFromSave OnUpdatedFromSave;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnPreSaveLevel;
    
    USCSaveGameComponent();
};


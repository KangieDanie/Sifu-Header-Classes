#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EActionType.h"
#include "TargetActionTypeRequest.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTargetActionTypeRequest : public UObject {
    GENERATED_BODY()
public:
    UTargetActionTypeRequest();
    UFUNCTION(BlueprintNativeEvent)
    EActionType BPE_GetTargetActionType(const AActor* _owner) const;
    
};


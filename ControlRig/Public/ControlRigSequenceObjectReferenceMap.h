#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ControlRigSequenceObjectReferences.h"
#include "ControlRigSequenceObjectReferenceMap.generated.h"

USTRUCT()
struct FControlRigSequenceObjectReferenceMap {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGuid> BindingIds;
    
    UPROPERTY()
    TArray<FControlRigSequenceObjectReferences> References;
    
public:
    CONTROLRIG_API FControlRigSequenceObjectReferenceMap();
};


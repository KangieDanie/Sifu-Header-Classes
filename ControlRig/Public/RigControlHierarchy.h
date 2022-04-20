#pragma once
#include "CoreMinimal.h"
#include "RigControl.h"
#include "RigControlHierarchy.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigControlHierarchy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FRigControl> Controls;
    
    UPROPERTY()
    TMap<FName, int32> NameToIndexMapping;
    
    UPROPERTY(Transient)
    TArray<FName> Selection;
    
public:
    FRigControlHierarchy();
};


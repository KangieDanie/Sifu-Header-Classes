#pragma once
#include "CoreMinimal.h"
#include "RigSpace.h"
#include "RigSpaceHierarchy.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigSpaceHierarchy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FRigSpace> Spaces;
    
    UPROPERTY()
    TMap<FName, int32> NameToIndexMapping;
    
    UPROPERTY(Transient)
    TArray<FName> Selection;
    
public:
    FRigSpaceHierarchy();
};


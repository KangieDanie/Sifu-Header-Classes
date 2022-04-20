#pragma once
#include "CoreMinimal.h"
#include "RigBone.h"
#include "RigBoneHierarchy.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigBoneHierarchy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FRigBone> Bones;
    
    UPROPERTY()
    TMap<FName, int32> NameToIndexMapping;
    
    UPROPERTY(Transient)
    TArray<FName> Selection;
    
public:
    FRigBoneHierarchy();
};


#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigInfluenceEntryModifier.generated.h"

USTRUCT()
struct FRigInfluenceEntryModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FRigElementKey> AffectedList;
    
    CONTROLRIG_API FRigInfluenceEntryModifier();
};


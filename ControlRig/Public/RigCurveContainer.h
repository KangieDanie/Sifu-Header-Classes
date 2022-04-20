#pragma once
#include "CoreMinimal.h"
#include "RigCurve.h"
#include "RigCurveContainer.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigCurveContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FRigCurve> Curves;
    
    UPROPERTY()
    TMap<FName, int32> NameToIndexMapping;
    
    UPROPERTY(Transient)
    TArray<FName> Selection;
    
public:
    FRigCurveContainer();
};


#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
#include "FieldNodeInt.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldNodeInt : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UFieldNodeInt();
};


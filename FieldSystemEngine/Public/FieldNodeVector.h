#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
#include "FieldNodeVector.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldNodeVector : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UFieldNodeVector();
};


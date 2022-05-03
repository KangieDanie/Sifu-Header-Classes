#pragma once
#include "CoreMinimal.h"
#include "FieldNodeInt.h"
#include "ToIntegerField.generated.h"

class UToIntegerField;
class UFieldNodeFloat;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UToIntegerField : public UFieldNodeInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UFieldNodeFloat* FloatField;
    
    UToIntegerField();
    UFUNCTION(BlueprintPure)
    UToIntegerField* SetToIntegerField(const UFieldNodeFloat* NewFloatField);
    
};


#pragma once
#include "CoreMinimal.h"
#include "RigControlValueStorage.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigControlValueStorage {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Float00;
    
    UPROPERTY()
    float Float01;
    
    UPROPERTY()
    float Float02;
    
    UPROPERTY()
    float Float03;
    
    UPROPERTY()
    float Float10;
    
    UPROPERTY()
    float Float11;
    
    UPROPERTY()
    float Float12;
    
    UPROPERTY()
    float Float13;
    
    UPROPERTY()
    float Float20;
    
    UPROPERTY()
    float Float21;
    
    UPROPERTY()
    float Float22;
    
    UPROPERTY()
    float Float23;
    
    UPROPERTY()
    float Float30;
    
    UPROPERTY()
    float Float31;
    
    UPROPERTY()
    float Float32;
    
    UPROPERTY()
    float Float33;
    
    UPROPERTY()
    bool bValid;
    
    FRigControlValueStorage();
};


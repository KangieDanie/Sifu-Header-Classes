#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OrderServiceInfos.h"
#include "OrderPresetDB.generated.h"

UCLASS()
class SIFU_API UOrderPresetDB : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FOrderServiceInfos> m_Services;
    
    UOrderPresetDB();
};


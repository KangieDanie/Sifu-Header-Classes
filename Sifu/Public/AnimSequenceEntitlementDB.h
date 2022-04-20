#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AnimSequenceEntitlementDB.generated.h"

class UAnimSequenceEntryDB;

UCLASS(BlueprintType)
class SIFU_API UAnimSequenceEntitlementDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_Entitlement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimSequenceEntryDB*> m_DBs;
    
    UAnimSequenceEntitlementDB();
};


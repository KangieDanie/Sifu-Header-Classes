#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ELootBoxType.h"
#include "LootBoxStaticData.h"
#include "LootBoxInstancedData.h"
#include "LootBaseItemStruct.h"
#include "LootBoxDB.generated.h"

class UDataTable;

UCLASS(BlueprintType)
class SIFU_API ULootBoxDB : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ELootBoxType, FLootBoxStaticData> m_LootBoxTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* m_SmallLootDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UDataTable*> m_BigLootDataTables;
    
public:
    ULootBoxDB();
    UFUNCTION(BlueprintCallable)
    void BPF_GetLoot(const FLootBoxInstancedData& _LootBoxData, TArray<FLootBaseItemStruct>& Out_LootedItems);
    
};


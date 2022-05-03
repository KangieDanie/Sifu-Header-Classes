#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "InputContext.h"
#include "InputMappingProfileDB.generated.h"

class UInputMappingProfileContextDB;
class UInputMappingPresets;
class UInputMappingProfileUIData;

UCLASS(BlueprintType)
class UInputMappingProfileDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bGamepadMapping;
    
    UPROPERTY(EditAnywhere)
    UInputMappingPresets* m_PresetDB;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UInputMappingProfileUIData* m_UIData;
    
    UPROPERTY(EditAnywhere)
    TMap<InputContext, UInputMappingProfileContextDB*> m_MappingPerContext;
    
    UInputMappingProfileDB();
};


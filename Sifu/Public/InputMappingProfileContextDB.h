#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "InputMappingGroup.h"
#include "InputMapping.h"
#include "InputMappingProfileContextDB.generated.h"

UCLASS()
class UInputMappingProfileContextDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FInputMappingGroup> m_MappingGroups;
    
    UInputMappingProfileContextDB();
    UFUNCTION()
    FString BPF_GetInputMappingDesc(const FInputMapping& _mapping);
    
};


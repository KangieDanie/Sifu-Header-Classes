#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "GameFlowNode.generated.h"

class UGameFlowNextMap;

UCLASS()
class SCCORE_API UGameFlowNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<UGameFlowNextMap*> m_potentialNextMaps;
    
    UPROPERTY(VisibleAnywhere)
    FSoftObjectPath m_Map;
    
    UPROPERTY(VisibleAnywhere)
    FName m_MapTag;
    
    UPROPERTY(VisibleAnywhere)
    FGameplayTagContainer m_MapOptions;
    
    UPROPERTY(VisibleAnywhere)
    bool m_bIsFirstPlayableMap;
    
    UGameFlowNode();
};


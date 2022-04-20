#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GameplayEffectReferencer.generated.h"

class USCGameplayEffect;

UCLASS()
class SCCORE_API UGameplayEffectReferencer : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<USCGameplayEffect*> m_ListOfAllGameplayEffect;
    
public:
    UGameplayEffectReferencer();
    UFUNCTION()
    void RetrieveAllGameplayEffects();
    
};


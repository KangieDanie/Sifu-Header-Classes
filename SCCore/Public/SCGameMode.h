#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "SCGameMode.generated.h"

class UGameplayEffect;

UCLASS(NonTransient)
class SCCORE_API ASCGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UGameplayEffect*> m_PlayerGameModeGameplayEffects;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsUsingPools;
    
    ASCGameMode();
};


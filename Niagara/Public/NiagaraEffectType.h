#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemScalabilitySettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ENiagaraCullReaction.h"
#include "ENiagaraScalabilityUpdateFrequency.h"
#include "NiagaraEmitterScalabilitySettingsArray.h"
#include "NiagaraSystemScalabilitySettingsArray.h"
#include "NiagaraEffectType.generated.h"

class UNiagaraSignificanceHandler;

UCLASS()
class NIAGARA_API UNiagaraEffectType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ENiagaraScalabilityUpdateFrequency UpdateFrequency;
    
    UPROPERTY(EditAnywhere)
    ENiagaraCullReaction CullReaction;
    
    UPROPERTY(EditAnywhere, Instanced)
    UNiagaraSignificanceHandler* SignificanceHandler;
    
    UPROPERTY()
    TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;
    
    UPROPERTY(EditAnywhere)
    FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;
    
    UPROPERTY(EditAnywhere)
    FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;
    
    UNiagaraEffectType();
};


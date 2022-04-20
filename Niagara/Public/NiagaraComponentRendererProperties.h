#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NiagaraRendererProperties.h"
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraComponentPropertyBinding.h"
#include "NiagaraComponentRendererProperties.generated.h"

class USceneComponent;

UCLASS(EditInlineNew, MinimalAPI)
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<USceneComponent> ComponentType;
    
    UPROPERTY(EditAnywhere)
    uint32 ComponentCountLimit;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding EnabledBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAssignComponentsOnParticleID;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bOnlyCreateComponentsOnParticleSpawn;
    
    UPROPERTY(EditAnywhere, Instanced)
    USceneComponent* TemplateComponent;
    
    UPROPERTY()
    TArray<FNiagaraComponentPropertyBinding> PropertyBindings;
    
    UNiagaraComponentRendererProperties();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "WidgetPoolEntryTemplate.h"
#include "WidgetPoolElementArray.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "WidgetPoolComponent.generated.h"

class USCUserWidget;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UWidgetPoolComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FWidgetPoolEntryTemplate> m_WidgetPoolTemplate;
    
    UPROPERTY(Transient)
    TMap<FName, FWidgetPoolElementArray> m_WidgetPool;
    
public:
    UWidgetPoolComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_ReleaseWidget(const FSCUserDefinedEnumHandler& _userEnum, USCUserWidget* _userWidget);
    
    UFUNCTION(BlueprintCallable)
    USCUserWidget* BPF_GetWidget(const FSCUserDefinedEnumHandler& _userEnum);
    
};


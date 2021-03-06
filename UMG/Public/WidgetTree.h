#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WidgetTree.generated.h"

class UWidget;

UCLASS()
class UMG_API UWidgetTree : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UWidget* RootWidget;
    
    UWidgetTree();
};


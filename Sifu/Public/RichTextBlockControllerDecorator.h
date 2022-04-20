#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EControllerIconStyles.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlockDecorator -FallbackName=RichTextBlockDecorator
#include "EControllerIconAxisTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "RichTextBlockControllerDecorator.generated.h"

class UUserWidget;

UCLASS(Abstract)
class URichTextBlockControllerDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EControllerIconStyles m_eDefaultIconStyle;
    
    UPROPERTY(EditAnywhere)
    EControllerIconAxisTypes m_eDefaultAxisType;
    
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_DefaultDrawingStyle;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> m_WidgetClass;
    
    UPROPERTY(EditAnywhere)
    int32 m_iBaselineOffset;
    
    UPROPERTY(EditAnywhere)
    FString m_MetaData;
    
    URichTextBlockControllerDecorator();
};


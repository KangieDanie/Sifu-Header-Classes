#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionEnabled -FallbackName=ECollisionEnabled
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionResponseContainer -FallbackName=CollisionResponseContainer
#include "SCCollisionResponseTemplate.generated.h"

USTRUCT(BlueprintType)
struct FSCCollisionResponseTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionEnabled::Type> m_eCollisionEnabled;
    
    UPROPERTY()
    TEnumAsByte<EObjectTypeQuery> m_eObjectType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eCollisionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCollisionResponseContainer m_ResponseToChannels;
    
    SCCORE_API FSCCollisionResponseTemplate();
};


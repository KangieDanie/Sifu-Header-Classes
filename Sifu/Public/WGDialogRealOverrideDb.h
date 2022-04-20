#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=SCDialogRealOverrideDb -FallbackName=SCDialogRealOverrideDb
#include "EJoinDialogActors.h"
#include "WGDialogRealOverrideDb.generated.h"

UCLASS()
class SIFU_API UWGDialogRealOverrideDb : public USCDialogRealOverrideDb {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EJoinDialogActors m_eJoinDialogActorsOnStart;
    
    UWGDialogRealOverrideDb();
};


#pragma once
#include "CoreMinimal.h"
#include "ECameraAnimDrivenComputationMethod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "EOrderType.h"
#include "AnimDrivenCameraOrderBTService.generated.h"

class UCameraComponentThird;
class UAbstractCameraData;

UCLASS(Abstract, Blueprintable)
class SIFU_API UAnimDrivenCameraOrderBTService : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EOrderType m_eOrderType;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceAsCurrentCamera;
    
    UPROPERTY(EditAnywhere)
    bool m_bWaitForFirstFrameOrderService;
    
    UPROPERTY(EditAnywhere)
    ECameraAnimDrivenComputationMethod m_eComputationMethod;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UCameraComponentThird> m_cameraComponent;
    
public:
    UAnimDrivenCameraOrderBTService();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UAbstractCameraData* GetCameraData() const;
    
};


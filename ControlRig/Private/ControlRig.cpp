#include "ControlRig.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVM -FallbackName=RigVM
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=AnimationDataSourceRegistry -FallbackName=AnimationDataSourceRegistry

class UControlRig;

void UControlRig::SetInteractionRigClass(TSubclassOf<UControlRig> InInteractionRigClass) {
}

void UControlRig::SetInteractionRig(UControlRig* InInteractionRig) {
}

TSubclassOf<UControlRig> UControlRig::GetInteractionRigClass() const {
    return NULL;
}

UControlRig* UControlRig::GetInteractionRig() const {
    return NULL;
}

UControlRig::UControlRig() {
    this->ExecutionType = ERigExecutionType::Runtime;
    this->VM = CreateDefaultSubobject<URigVM>(TEXT("VM"));
    this->DataSourceRegistry = CreateDefaultSubobject<UAnimationDataSourceRegistry>(TEXT("DataSourceRegistry"));
    this->EventQueue.AddDefaulted(1);
    this->InteractionRig = NULL;
    this->InteractionRigClass = NULL;
}


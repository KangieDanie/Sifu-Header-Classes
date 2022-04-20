#include "ControlRigComponent.h"

class UControlRigComponent;
class USkeletalMesh;
class UControlRig;
class USkeletalMeshComponent;

void UControlRigComponent::Update(float DeltaTime) {
}

void UControlRigComponent::SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements) {
}

void UControlRigComponent::SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space) {
}

void UControlRigComponent::SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren) {
}

void UControlRigComponent::SetControlVector2D(FName ControlName, FVector2D Value) {
}

void UControlRigComponent::SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space) {
}

void UControlRigComponent::SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space) {
}

void UControlRigComponent::SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space) {
}

void UControlRigComponent::SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space) {
}

void UControlRigComponent::SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space) {
}

void UControlRigComponent::SetControlInt(FName ControlName, int32 Value) {
}

void UControlRigComponent::SetControlFloat(FName ControlName, float Value) {
}

void UControlRigComponent::SetControlBool(FName ControlName, bool Value) {
}

void UControlRigComponent::SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren) {
}

void UControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh(USkeletalMesh* InSkeletalMesh) {
}

void UControlRigComponent::OnPreUpdate_Implementation(UControlRigComponent* Component) {
}

void UControlRigComponent::OnPreSetup_Implementation(UControlRigComponent* Component) {
}

void UControlRigComponent::OnPostUpdate_Implementation(UControlRigComponent* Component) {
}

void UControlRigComponent::OnPostSetup_Implementation(UControlRigComponent* Component) {
}

void UControlRigComponent::OnPostInitialize_Implementation(UControlRigComponent* Component) {
}

void UControlRigComponent::Initialize() {
}

FTransform UControlRigComponent::GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space) {
    return FTransform{};
}

FTransform UControlRigComponent::GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space) {
    return FTransform{};
}

FTransform UControlRigComponent::GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space) {
    return FTransform{};
}

TArray<FName> UControlRigComponent::GetElementNames(ERigElementType ElementType) {
    return TArray<FName>();
}

FVector2D UControlRigComponent::GetControlVector2D(FName ControlName) {
    return FVector2D{};
}

FTransform UControlRigComponent::GetControlTransform(FName ControlName, EControlRigComponentSpace Space) {
    return FTransform{};
}

FVector UControlRigComponent::GetControlScale(FName ControlName, EControlRigComponentSpace Space) {
    return FVector{};
}

FRotator UControlRigComponent::GetControlRotator(FName ControlName, EControlRigComponentSpace Space) {
    return FRotator{};
}

UControlRig* UControlRigComponent::GetControlRig() {
    return NULL;
}

FVector UControlRigComponent::GetControlPosition(FName ControlName, EControlRigComponentSpace Space) {
    return FVector{};
}

FTransform UControlRigComponent::GetControlOffset(FName ControlName, EControlRigComponentSpace Space) {
    return FTransform{};
}

int32 UControlRigComponent::GetControlInt(FName ControlName) {
    return 0;
}

float UControlRigComponent::GetControlFloat(FName ControlName) {
    return 0.0f;
}

bool UControlRigComponent::GetControlBool(FName ControlName) {
    return false;
}

FTransform UControlRigComponent::GetBoneTransform(FName BoneName, EControlRigComponentSpace Space) {
    return FTransform{};
}

float UControlRigComponent::GetAbsoluteTime() const {
    return 0.0f;
}

bool UControlRigComponent::DoesElementExist(FName Name, ERigElementType ElementType) {
    return false;
}

void UControlRigComponent::ClearMappedElements() {
}

void UControlRigComponent::AddMappedSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves) {
}

void UControlRigComponent::AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements) {
}

void UControlRigComponent::AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components) {
}

void UControlRigComponent::AddMappedCompleteSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent) {
}

UControlRigComponent::UControlRigComponent() {
    this->ControlRigClass = NULL;
    this->bResetTransformBeforeTick = true;
    this->bResetInitialsBeforeSetup = true;
    this->bUpdateRigOnTick = true;
    this->bUpdateInEditor = true;
    this->bDrawBones = true;
    this->ControlRig = NULL;
}


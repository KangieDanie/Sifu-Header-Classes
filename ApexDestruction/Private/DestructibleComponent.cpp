#include "DestructibleComponent.h"

class UDestructibleMesh;
class UMaterialInterface;

void UDestructibleComponent::SetDestructibleMesh(UDestructibleMesh* NewMesh) {
}

void UDestructibleComponent::ReplaceAllMaterials(UMaterialInterface* Material) {
}

UDestructibleMesh* UDestructibleComponent::GetDestructibleMesh() {
    return NULL;
}

void UDestructibleComponent::ApplyRadiusDamage(float BaseDamage, const FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage) {
}

void UDestructibleComponent::ApplyDamage(float DamageAmount, const FVector& HitLocation, const FVector& ImpulseDir, float ImpulseStrength) {
}

UDestructibleComponent::UDestructibleComponent() {
    this->bFractureEffectOverride = false;
    this->bEnableHardSleeping = false;
    this->LargeChunkThreshold = 25.00f;
    this->ApexChunksMaxDistanceThreshold = 1000.00f;
    this->ApexChunksUpdateSleepInterval = 0.50f;
    this->Snapshot = NULL;
}


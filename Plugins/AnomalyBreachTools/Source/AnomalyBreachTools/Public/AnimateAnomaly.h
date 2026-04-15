#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MapGeneratorV2.h"
#include "AnimateAnomaly.generated.h"

// Define the struct again here, or move it to AnomalyInterfaces.h if you want to share it. 
// It's perfectly safe to redefine a slightly differently named internal struct.
USTRUCT()
struct FAnimDoorOriginalState
{
    GENERATED_BODY()
    bool bRequiresPower = false;
    UPROPERTY()
    UObject* PowerSource = nullptr;
};

UCLASS()
class ANOMALYBREACHTOOLS_API AAnimateAnomaly : public ACharacter
{
    GENERATED_BODY()

public:
    AAnimateAnomaly();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anomaly Data")
    FName AnomalyID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anomaly Data")
    EMapGenZone CurrentZone;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anomaly Data|AI")
    bool bFreezeWhenLookedAt = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anomaly Data|AI")
    bool bEnrageOnLook = false;

    // ==========================================
    // ENVIRONMENTAL MANIPULATION
    // ==========================================
    UFUNCTION(BlueprintCallable, Category = "Anomaly API|Environment")
    void LockNearbyDoors(float Radius, float Duration);

    UFUNCTION(BlueprintCallable, Category = "Anomaly API|Environment")
    void ForceOpenNearbyDoors(float Radius);

    UFUNCTION(BlueprintCallable, Category = "Anomaly API|Environment")
    void ForceCloseNearbyDoors(float Radius);

    // ==========================================
    // PLAYER MANIPULATION
    // ==========================================
    UFUNCTION(BlueprintCallable, Category = "Anomaly API|Player")
    void DealDamageToPlayer(AActor* Player, float Amount, FName DamageType);

    UFUNCTION(BlueprintCallable, Category = "Anomaly API|Player")
    void InstaKillPlayer(AActor* Player, FName DeathReason);

    UFUNCTION(BlueprintCallable, Category = "Anomaly API|Player")
    void DrainPlayerStamina(AActor* Player, float Amount);

    UFUNCTION(BlueprintCallable, Category = "Anomaly API|Player")
    void ForcePlayerBlink(AActor* Player);

    // ==========================================
    // MONSTER SPECIFIC API
    // ==========================================
    UFUNCTION(BlueprintCallable, Category = "Anomaly API|Movement")
    void TeleportBehindPlayer(AActor* Player, float MinimumDistance);

    UFUNCTION(BlueprintCallable, Category = "Anomaly API|Movement")
    void TeleportToRandomRoomInZone(AMapGeneratorV2* MapGen, EMapGenZone TargetZone);

    // ==========================================
    // MODDER EVENTS
    // ==========================================
    UFUNCTION(BlueprintImplementableEvent, Category = "Anomaly Events")
    void OnTargetSpotted(AActor* Target);

    UFUNCTION(BlueprintImplementableEvent, Category = "Anomaly Events")
    void OnTargetLost(AActor* Target);

    UFUNCTION(BlueprintImplementableEvent, Category = "Anomaly Events")
    void OnReachedTarget();

    UFUNCTION(BlueprintImplementableEvent, Category = "Anomaly Events")
    void OnLookedAtDuringBlink(AActor* Player);

    UFUNCTION(BlueprintImplementableEvent, Category = "Anomaly Events")
    void OnDoorBlockedPath(AActor* DoorActor);

private:
    UPROPERTY()
    TMap<AActor*, FAnimDoorOriginalState> LockedDoorsMap;

    FTimerHandle UnlockTimerHandle;
    void RestoreLockedDoors();
};
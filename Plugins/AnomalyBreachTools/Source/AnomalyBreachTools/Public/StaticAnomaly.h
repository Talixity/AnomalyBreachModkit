#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapGeneratorV2.h" // Needed for EMapGenZone
#include "StaticAnomaly.generated.h"

USTRUCT()
struct FDoorOriginalState
{
    GENERATED_BODY()

    bool bRequiresPower = false;
    UPROPERTY()
    UObject* PowerSource = nullptr;
};

UCLASS()
class ANOMALYBREACHTOOLS_API AStaticAnomaly : public AActor
{
    GENERATED_BODY()

public:
    AStaticAnomaly();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anomaly Data")
    FName AnomalyID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anomaly Data")
    EMapGenZone CurrentZone;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anomaly Data|Static")
    bool bIsGrabbable = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anomaly Data|Static")
    bool bDrainStaminaWhileHeld = false;

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
    // MODDER EVENTS
    // ==========================================

    UFUNCTION(BlueprintImplementableEvent, Category = "Anomaly Events")
    void OnGrabbed(AActor* GrabbingHand);

    UFUNCTION(BlueprintImplementableEvent, Category = "Anomaly Events")
    void OnDropped();

    UFUNCTION(BlueprintImplementableEvent, Category = "Anomaly Events")
    void OnUsed(AActor* GrabbingHand);

    UFUNCTION(BlueprintImplementableEvent, Category = "Anomaly Events")
    void OnPlayerEnteredProximity(AActor* Player);

    UFUNCTION(BlueprintImplementableEvent, Category = "Anomaly Events")
    void OnPlayerExitedProximity(AActor* Player);

private:
    UPROPERTY()
    TMap<AActor*, FDoorOriginalState> LockedDoorsMap;

    FTimerHandle UnlockTimerHandle;

    void RestoreLockedDoors();
};
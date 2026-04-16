// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

// THIS MUST BE THE LAST INCLUDE
#include "AnomalyInterfaces.generated.h"

// =====================================
// DOOR INTERFACE
// =====================================
UINTERFACE(MinimalAPI)
class UAnomalyDoorInterface : public UInterface
{
    GENERATED_BODY()
};

class ANOMALYBREACHTOOLS_API IAnomalyDoorInterface
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Door Interface")
    bool GetRequiresPower() const;

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Door Interface")
    UObject* GetPowerSource() const;

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Door Interface")
    void SetRequiresPower(bool bRequires);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Door Interface")
    void SetPowerSource(UObject* Source);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Door Interface")
    void OpenDoor();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Door Interface")
    void CloseDoor();
};

// =====================================
// PLAYER INTERFACE
// =====================================
UINTERFACE(MinimalAPI)
class UAnomalyPlayerInterface : public UInterface
{
    GENERATED_BODY()
};

class ANOMALYBREACHTOOLS_API IAnomalyPlayerInterface
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Player Interface")
    void TakeAnomalyDamage(float Amount, FName DamageType);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Player Interface")
    void TakeInstaKill(FName DeathReason);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Player Interface")
    void DrainPlayerStamina(float Amount);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Player Interface")
    void ForcePlayerBlink();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Player Interface")
    void ApplyScreenDistortion(float Intensity, float Duration);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Player Interface")
    void HealAnomalyDamage(float Amount);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Player Interface")
    void RestorePlayerStamina(float Amount);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Player Interface")
    void SetNightVisionState(bool bIsActive);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Anomaly Player Interface")
    void SetGasMaskState(bool bIsActive);
};
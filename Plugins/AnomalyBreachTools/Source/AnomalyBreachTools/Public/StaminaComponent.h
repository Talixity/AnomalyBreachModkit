#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StaminaComponent.generated.h"

class UCharacterMovementComponent;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ANOMALYBREACHTOOLS_API UStaminaComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UStaminaComponent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // ==========================================
    // PROPERTIES
    // ==========================================
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina Settings")
    float MaxStamina = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina Settings")
    float StaminaDrainRate = 15.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina Settings")
    float StaminaRegenRate = 10.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina Settings")
    float WalkSpeed = 300.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina Settings")
    float SprintSpeed = 600.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Stamina Data")
    float CurrentStamina;

    UPROPERTY(BlueprintReadOnly, Category = "Stamina Data")
    bool bIsSprinting;

    UPROPERTY(BlueprintReadOnly, Category = "Stamina Data")
    bool bIsExhausted;

    // ==========================================
    // FUNCTIONS
    // ==========================================
    UFUNCTION(BlueprintCallable, Category = "Stamina Actions")
    void StartSprinting(); // Call when the VR thumbstick is clicked/pushed

    UFUNCTION(BlueprintCallable, Category = "Stamina Actions")
    void StopSprinting(); // Call when VR thumbstick is released

    UFUNCTION(BlueprintCallable, Category = "Stamina Actions")
    void DrainStamina(float Amount); // Anomalies use this

private:
    UPROPERTY()
    UCharacterMovementComponent* MovementComponent;
};
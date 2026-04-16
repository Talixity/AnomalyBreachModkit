#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlinkComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBlinkSignature);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ANOMALYBREACHTOOLS_API UBlinkComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UBlinkComponent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // ==========================================
    // PROPERTIES
    // ==========================================
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blink Settings")
    float MaxBlinkMeter = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blink Settings")
    float BlinkDrainRate = 12.0f; // How fast the meter goes down naturally

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blink Settings")
    float BlinkDuration = 0.25f; // How long the screen stays black in seconds

    UPROPERTY(BlueprintReadOnly, Category = "Blink Data")
    float CurrentBlinkMeter;

    UPROPERTY(BlueprintReadOnly, Category = "Blink Data")
    bool bIsBlinking;

    // ==========================================
    // EVENTS FOR MODDERS
    // ==========================================
    UPROPERTY(BlueprintAssignable, Category = "Blink Events")
    FOnBlinkSignature OnBlinkStart;

    UPROPERTY(BlueprintAssignable, Category = "Blink Events")
    FOnBlinkSignature OnBlinkEnd;

    // ==========================================
    // FUNCTIONS
    // ==========================================
    UFUNCTION(BlueprintCallable, Category = "Blink Actions")
    void ManualBlink(); // Player presses the blink button

    UFUNCTION(BlueprintCallable, Category = "Blink Actions")
    void ForceBlink(); // Anomalies use this to force a blink

private:
    void ExecuteBlink();
    void EndBlink();

    FTimerHandle BlinkTimerHandle;
};
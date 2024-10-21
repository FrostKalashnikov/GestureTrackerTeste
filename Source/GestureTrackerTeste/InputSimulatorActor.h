// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Windows.h>
#include <iostream>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InputSimulatorActor.generated.h"

UCLASS()
class GESTURETRACKERTESTE_API AInputSimulatorActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInputSimulatorActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintCallable, category = InputSimulation)
	void ClickToSimulate(FString Key);

	UFUNCTION(BlueprintCallable, category = InputSimulation)
	void PressToSimulate(FString Key);

	UFUNCTION(BlueprintCallable, category = InputSimulation)
	void ReleaseToSimulate(FString Key);


};
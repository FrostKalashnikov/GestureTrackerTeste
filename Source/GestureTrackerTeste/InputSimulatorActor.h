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


	UFUNCTION(BlueprintCallable)
	void SendInputToSimulate(FString Key);

	void PressKey(WORD key) {
		INPUT input;
		input.type = INPUT_KEYBOARD;
		input.ki.wScan = 0;
		input.ki.time = 0;
		input.ki.dwExtraInfo = 0;

		input.ki.wVk = key; // Código da tecla
		input.ki.dwFlags = 0;
		// Pressionar a tecla
		SendInput(1, &input, sizeof(INPUT));

		// Soltar a tecla
		input.ki.dwFlags = KEYEVENTF_KEYUP;
		SendInput(1, &input, sizeof(INPUT));
	}

	void TypeFString(const FString& UnrealText) {
		// Converte FString para um array de TCHAR
		const TCHAR* TextArray = *UnrealText;

		for (int32 i = 0; i < UnrealText.Len(); i++) {
			// Converte o caractere para o código virtual usando VkKeyScan
			WORD VirtualKeyCode = VkKeyScan(TextArray[i]);

			// Verifica se o caractere requer shift (bits mais altos de VkKeyScan)
			if (VirtualKeyCode & 0x0100) {
				PressKey(VK_SHIFT);  // Pressiona Shift se necessário
			}

			// Pressiona a tecla correspondente
			PressKey(LOBYTE(VirtualKeyCode));  // Envia o byte inferior do código virtual

			// Solta a tecla Shift se foi pressionado
			if (VirtualKeyCode & 0x0100) {
				PressKey(VK_SHIFT);  // Solta o Shift
			}

			FPlatformProcess::Sleep(0.1f);  // Atraso entre as teclas (100 ms)N
		}
	}

	UFUNCTION(BlueprintCallable)
	void SimulateTypingInUnreal() {
		FString TextToType = TEXT("Hello Unreal");
		TypeFString(TextToType);
	}

};